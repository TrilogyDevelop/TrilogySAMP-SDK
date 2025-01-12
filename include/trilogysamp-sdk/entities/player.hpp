#pragma once

#include <string>

class IPlayer {
 public:
  [[nodiscard]] virtual std::uint16_t GetId() const = 0;
  [[nodiscard]] virtual const std::string& GetName() = 0;
};