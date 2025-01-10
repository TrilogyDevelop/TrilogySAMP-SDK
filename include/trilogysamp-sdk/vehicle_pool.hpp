#pragma once

#include "pool.hpp"
#include "vehicle.hpp"

constexpr std::uint16_t kMaxVehicles = 2000;

struct VehicleInfo {};

class IVehiclePool : public IPool<IVehicle, VehicleInfo> {
 public:
};