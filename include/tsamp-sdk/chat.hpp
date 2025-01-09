#pragma once

#include <string>

class IChatHandler {};

class IChat {
 public:
  virtual void AddEntry(const std::string& text,
                        const std::uint32_t& color) = 0;
  virtual void SetPageSize(std::uint8_t value) = 0;
};