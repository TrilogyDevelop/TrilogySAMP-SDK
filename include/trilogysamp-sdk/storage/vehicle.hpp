#pragma once

#include "../entities/vehicle.hpp"
#include "pool.hpp"

constexpr std::uint16_t kMaxVehicles = 2000;

struct VehicleInfo {};

class IVehiclePool : public IPool<IVehicle, VehicleInfo> {
 public:
};