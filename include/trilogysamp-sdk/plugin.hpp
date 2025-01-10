#pragma once

#include "core.hpp"

struct PluginInfo {
  const char* name;
  const char* author;
  const char* version;
};

class IPlugin {
 public:
  virtual PluginInfo& GetPluginInfo() = 0;

  virtual void OnLoad(ICore* core) = 0;
  virtual void OnUnload() = 0;
};