#pragma once

#include "object.hpp"
#include "pickup.hpp"
#include "player.hpp"
#include "vehicle.hpp"

class IStoragePool {
 public:
  [[nodiscard]] virtual IPlayerPool& GetPlayerPool() = 0;
  [[nodiscard]] virtual IVehiclePool& GetVehiclePool() = 0;
  [[nodiscard]] virtual IPickupPool& GetPickupPool() = 0;
  [[nodiscard]] virtual IObjectPool& GetObjectPool() = 0;
};