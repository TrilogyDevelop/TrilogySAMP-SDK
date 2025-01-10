#pragma once

#include "chat.hpp"
#include "config.hpp"
#include "dialog.hpp"
#include "logger.hpp"
#include "network.hpp"
#include "scoreboard.hpp"

class CoreEventHandler {
  virtual bool OnTick() { return true; };
  virtual bool OnInitialize() { return true; };
};

class ICore {
 public:
  [[nodiscard]] virtual EventDispatcher<CoreEventHandler>& GetEventDispatcher()
      const = 0;
  [[nodiscard]] virtual INetwork& GetNetwork() const = 0;
  [[nodiscard]] virtual IConfig& GetConfig() const = 0;
  [[nodiscard]] virtual ILogger& GetLogger() const = 0;
  [[nodiscard]] virtual IChat& GetChat() const = 0;
  [[nodiscard]] virtual IDialog& GetDialog() const = 0;
  [[nodiscard]] virtual IScoreboard& GetScoreboard() const = 0;
};