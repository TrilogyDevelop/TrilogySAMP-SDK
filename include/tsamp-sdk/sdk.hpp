#pragma once

#include "core.hpp"

#define SET_PlUGIN_ENTRY_POINT(p) \
  extern "C" __declspec(dllexport) IPlugin* PluginEntryPoint() { return new p; }