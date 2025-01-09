#pragma once

#include <cstdint>
#include <string>

#include "events.hpp"

class RakClientInterface;
class PlayerPool;
class VehiclePool;
class PickupPool;
class ObjectPool;

class NetworkEventHandler {
  virtual bool OnSendPacket(const std::string& packet) { return true; };
  virtual bool OnReceivePacket(const std::string& packet) { return true; };
  virtual bool OnSendRPC(const std::string& rpc) { return true; };
  virtual bool OnReceiveRPC(const std::string& rpc) { return true; };
};

class INetwork {
 public:
  [[nodiscard]] virtual EventDispatcher<NetworkEventHandler>&
  GetEventDispatcher() const = 0;
  [[nodiscard]] virtual RakClientInterface& GetRakClientInterface() const = 0;
  [[nodiscard]] virtual PlayerPool& GetPlayerPool() const = 0;
  [[nodiscard]] virtual VehiclePool& GetVehiclePool() const = 0;
  [[nodiscard]] virtual PickupPool& GetPickupPool() const = 0;
  [[nodiscard]] virtual ObjectPool& GetObjectPool() const = 0;
};