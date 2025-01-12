#pragma once

#include "entities/pickup.hpp"
#include "pool.hpp"

constexpr std::uint16_t kMaxPickups = 4096;

struct PickupInfo {};

class IPickupPool : public IPool<IPickup, PickupInfo> {
 public:
};