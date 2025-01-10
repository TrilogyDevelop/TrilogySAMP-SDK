#pragma once

#include "pool.hpp"
#include "vehicle.hpp"

constexpr std::uint16_t kMaxVehicles = 2000;

class IVehiclePool : public IPool<IVehicle> {
 public:
  // todo: add support info struct to IPool
  virtual void Create(std::uint16_t id) = 0;
};