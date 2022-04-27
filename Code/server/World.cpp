#include <World.h>
#include <Components.h>

#include <Services/CharacterService.h>
#include <Services/PlayerService.h>
#include <Services/ObjectService.h>
#include <Services/QuestService.h>
#include <Services/ServerListService.h>
#include <Services/PartyService.h>
#include <Services/ActorValueService.h>
#include <Services/AdminService.h>
#include <Services/InventoryService.h>
#include <Services/MagicService.h>
#include <Services/OverlayService.h>
#include <Services/CommandService.h>

#include <es_loader/ESLoader.h>

World::World()
{
    m_spAdminService = std::make_shared<AdminService>(*this, m_dispatcher);
    spdlog::default_logger()->sinks().push_back(std::static_pointer_cast<spdlog::sinks::sink>(m_spAdminService));

    ctx().emplace<CharacterService>(*this, m_dispatcher);
    ctx().emplace<PlayerService>(*this, m_dispatcher);
    ctx().emplace<CalendarService>(*this, m_dispatcher);
    ctx().emplace<ObjectService>(*this, m_dispatcher);
    ctx().emplace<ModsComponent>();
    ctx().emplace<ServerListService>(*this, m_dispatcher);
    ctx().emplace<QuestService>(*this, m_dispatcher);
    ctx().emplace<PartyService>(*this, m_dispatcher);
    ctx().emplace<ActorValueService>(*this, m_dispatcher);
    ctx().emplace<InventoryService>(*this, m_dispatcher);
    ctx().emplace<MagicService>(*this, m_dispatcher);
    ctx().emplace<OverlayService>(*this, m_dispatcher);
    ctx().emplace<CommandService>(*this, m_dispatcher);

    ESLoader::ESLoader loader;
    // emplace loaded mods into modscomponent.
    m_recordCollection = loader.BuildRecordCollection();
    for (const auto& it : loader.GetLoadOrder())
    {
        ctx().emplace<ModsComponent>().AddServerMod(it);
    }
}
