#pragma once

#include "chat.hpp"
#include "config.hpp"
#include "dialog.hpp"
#include "logger.hpp"
#include "network.hpp"
#include "player_tags.hpp"
#include "scoreboard.hpp"

class ICoreEventHandler {
  virtual void OnTick() {};
  virtual void OnInitialize() {};
};

class ICore {
 public:
  [[nodiscard]] virtual EventDispatcher<ICoreEventHandler>&
  GetEventDispatcher() = 0;

  [[nodiscard]] virtual INetwork& GetNetwork() = 0;
  [[nodiscard]] virtual IConfig& GetConfig() = 0;
  [[nodiscard]] virtual ILogger& GetLogger() = 0;
  [[nodiscard]] virtual IChat& GetChat() = 0;
  [[nodiscard]] virtual IDialog& GetDialog() = 0;
  [[nodiscard]] virtual IScoreboard& GetScoreboard() = 0;
  [[nodiscard]] virtual IPlayerTags& GetPlayerTags() = 0;
};