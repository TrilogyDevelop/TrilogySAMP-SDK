#pragma once

#include <cstdint>
#include <string>

#include "events.hpp"
#include "object_pool.hpp"
#include "pickup_pool.hpp"
#include "player_pool.hpp"
#include "vehicle_pool.hpp"

class RakClientInterface;

class INetworkEventHandler {
  virtual bool OnSendPacket(const std::string& packet) { return true; };
  virtual bool OnReceivePacket(const std::string& packet) { return true; };
  virtual bool OnSendRPC(const std::string& rpc) { return true; };
  virtual bool OnReceiveRPC(const std::string& rpc) { return true; };
};

class INetwork {
 public:
  [[nodiscard]] virtual EventDispatcher<INetworkEventHandler>&
  GetEventDispatcher() = 0;
  [[nodiscard]] virtual RakClientInterface& GetRakClientInterface() = 0;
  [[nodiscard]] virtual IPlayerPool& GetPlayerPool() = 0;
  [[nodiscard]] virtual IVehiclePool& GetVehiclePool() = 0;
  [[nodiscard]] virtual IPickupPool& GetPickupPool() = 0;
  [[nodiscard]] virtual IObjectPool& GetObjectPool() = 0;
};