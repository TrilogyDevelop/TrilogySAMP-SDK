#pragma once

#include "object.hpp"
#include "pool.hpp"

constexpr std::uint16_t kMaxObjects = 1000;

struct ObjectInfo {};

class IObjectPool : public IPool<IObject, ObjectInfo> {
 public:
  virtual void Create(std::uint16_t id) = 0;
};