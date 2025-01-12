#pragma once

#include "config.hpp"
#include "logger.hpp"
#include "multiplayer/chat.hpp"
#include "multiplayer/dialog.hpp"
#include "multiplayer/player_tags.hpp"
#include "multiplayer/scoreboard.hpp"
#include "net/network.hpp"
#include "storage/storage.hpp"


class ICoreEventHandler {
  virtual void OnTick() {};
  virtual void OnInitialize() {};
};

class ICore {
 public:
  [[nodiscard]] virtual EventDispatcher<ICoreEventHandler>&
  GetEventDispatcher() = 0;

  [[nodiscard]] virtual INetwork& GetNetwork() = 0;
  [[nodiscard]] virtual IStorage& GetStorage() = 0;
  [[nodiscard]] virtual IConfig& GetConfig() = 0;
  [[nodiscard]] virtual ILogger& GetLogger() = 0;
  [[nodiscard]] virtual IChat& GetChat() = 0;
  [[nodiscard]] virtual IDialog& GetDialog() = 0;
  [[nodiscard]] virtual IScoreboard& GetScoreboard() = 0;
  [[nodiscard]] virtual IPlayerTags& GetPlayerTags() = 0;
};