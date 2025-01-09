#pragma once

#include "chat.hpp"
#include "dialog.hpp"
#include "network.hpp"
#include "scoreboard.hpp"

struct PluginInfo {
  const char* name;
  const char* author;
  const char* version;
};

class ICore {
 public:
  [[nodiscard]] virtual INetwork& GetNetwork() const = 0;
  [[nodiscard]] virtual IChat& GetChat() const = 0;
  [[nodiscard]] virtual IDialog& GetDialog() const = 0;
  [[nodiscard]] virtual IScoreboard& GetScoreboard() const = 0;
};

class IPlugin {
 public:
  virtual PluginInfo& GetPluginInfo() = 0;

  virtual void OnLoad(ICore* core) = 0;
  virtual void OnUnload() = 0;

  virtual void OnTick() {};
  virtual void OnInitialize() {};
};