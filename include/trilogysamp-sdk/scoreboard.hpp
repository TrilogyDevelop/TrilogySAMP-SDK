#pragma once

#include <string>

#include "events.hpp"

class ScoreboardEventHandler {};

class IScoreboard {
 public:
  [[nodiscard]] virtual EventDispatcher<ScoreboardEventHandler>&
  GetEventDispatcher() const = 0;
};