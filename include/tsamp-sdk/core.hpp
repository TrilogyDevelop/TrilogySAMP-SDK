#pragma once

#include "chat.hpp"
#include "dialog.hpp"
#include "network.hpp"

struct PluginInfo {
  const char* name;
  const char* author;
  const char* version;
};

class ICore {
 public:
  [[nodiscard]] virtual INetwork& GetNetwork() = 0;
  [[nodiscard]] virtual IChat& GetChat() = 0;
  [[nodiscard]] virtual IDialog& GetDialog() = 0;
};

class IPlugin {
 public:
  virtual void OnLoad(ICore* core) = 0;
  virtual void OnUnload() = 0;
  virtual PluginInfo& GetPluginInfo() = 0;

  // todo: add to ICore
  //   virtual INetworkHandler& GetNetworkHandler() = 0;
  //   virtual IChatHandler& GetChatHandler() = 0;
};