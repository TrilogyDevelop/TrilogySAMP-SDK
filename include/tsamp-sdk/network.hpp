#pragma once

#include <cstdint>
#include <string>

class RakClientInterface;
class PlayerPool;
class VehiclePool;
class PickupPool;
class ObjectPool;

class INetworkHandler {
  virtual bool OnSendPacket(const std::string& packet) = 0;
  virtual bool OnReceivePacket(const std::string& packet) = 0;
  virtual bool OnSendRPC(const std::string& rpc) = 0;
  virtual bool OnReceiveRPC(const std::string& rpc) = 0;
};

class INetwork {
 public:
  virtual RakClientInterface& GetRakClientInterface() const = 0;
  virtual PlayerPool& GetPlayerPool() const = 0;
  virtual VehiclePool& GetVehiclePool() const = 0;
  virtual PickupPool& GetPickupPool() const = 0;
  virtual ObjectPool& GetObjectPool() const = 0;
};