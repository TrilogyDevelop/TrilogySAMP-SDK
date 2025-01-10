#pragma once

#include "pickup.hpp"
#include "pool.hpp"

constexpr std::uint16_t kMaxPickups = 4096;

struct PickupInfo {};

class IPickupPool : public IPool<IPickup, PickupInfo> {
 public:
  virtual void Create(std::uint16_t id) = 0;
};