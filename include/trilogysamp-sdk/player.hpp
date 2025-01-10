#pragma once

#include <string>

class IPlayer {
 public:
  virtual std::uint16_t GetId() const = 0;
  virtual const std::string& GetName() const = 0;
};