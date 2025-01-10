#pragma once

#include "object.hpp"
#include "pool.hpp"

constexpr std::uint16_t kMaxObjects = 1000;

class IObjectPool : public IPool<IObject> {
 public:
  virtual void Create(std::uint16_t id) = 0;
};