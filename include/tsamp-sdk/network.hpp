#pragma once

#include <cstdint>
#include <string>

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
  virtual RakClientInterface& GetRakClientInterface() const = 0;
  virtual PlayerPool& GetPlayerPool() const = 0;
  virtual VehiclePool& GetVehiclePool() const = 0;
  virtual PickupPool& GetPickupPool() const = 0;
  virtual ObjectPool& GetObjectPool() const = 0;
};