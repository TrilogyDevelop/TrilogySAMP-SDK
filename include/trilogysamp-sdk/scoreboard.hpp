#pragma once

#include <string>

#include "events.hpp"

class IScoreboardEventHandler {};

class IScoreboard {
 public:
  [[nodiscard]] virtual EventDispatcher<IScoreboardEventHandler>&
  GetEventDispatcher() = 0;
};