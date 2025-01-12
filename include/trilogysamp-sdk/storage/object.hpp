#pragma once

#include "entities/object.hpp"
#include "pool.hpp"

constexpr std::uint16_t kMaxObjects = 1000;

struct ObjectInfo {};

class IObjectPool : public IPool<IObject, ObjectInfo> {
 public:
};