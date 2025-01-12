#pragma once

#include <string>

#include "events.hpp"

class ImDrawList;
class CVector;

class IPlayerTagsEventHandler {
 public:
  virtual bool OnDrawNickName(ImDrawList* dl, CVector* position,
                              std::string& text, uint16_t& id,
                              std::uint32_t& color) {
    return true;
  };

  virtual bool OnDrawBar(ImDrawList* dl, CVector* position, float& health,
                         float& armour, int& weapon_id) {
    return true;
  }
};

class IPlayerTags {
  [[nodiscard]] virtual EventDispatcher<IPlayerTagsEventHandler>&
  GetEventDispatcher() = 0;
};