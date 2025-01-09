#pragma once

#include <string>

#include "events.hpp"

class ChatEventHandler {};

class IChat {
 public:
  [[nodiscard]] virtual EventDispatcher<ChatEventHandler>& GetEventDispatcher()
      const = 0;

  virtual void AddEntry(const std::string& text,
                        const std::uint32_t& color) = 0;
  virtual void SetPageSize(std::uint8_t value) = 0;
};