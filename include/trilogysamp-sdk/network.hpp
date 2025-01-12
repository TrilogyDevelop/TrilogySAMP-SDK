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
  virtual bool Connect(std::string host, std::uint16_t port,
                       std::string password, bool is_used_proxy) = 0;
  virtual void Disconnect() = 0;
  [[nodiscard]] virtual bool IsConnected() const = 0;
  virtual void SetName(std::string name) = 0;
  [[nodiscard]] virtual std::string GetName() const = 0;
  virtual void SetPassword(std::string password) = 0;
  [[nodiscard]] virtual std::string GetPassword() const = 0;
  [[nodiscard]] virtual std::string GetServerAddress() const = 0;
  [[nodiscard]] virtual std::uint16_t GetServerPort() const = 0;
  [[nodiscard]] virtual std::uint32_t GetPing() const = 0;
  virtual void SetFakePing(std::uint32_t ping) = 0;
  virtual void SetVersion(std::string version) = 0;
  virtual void SetProxy(std::string host, std::uint16_t port) = 0;
  [[nodiscard]] virtual bool IsUseProxy() const = 0;
  [[nodiscard]] virtual RakClientInterface& GetRakClientInterface() = 0;
  [[nodiscard]] virtual IPlayerPool& GetPlayerPool() = 0;
  [[nodiscard]] virtual IVehiclePool& GetVehiclePool() = 0;
  [[nodiscard]] virtual IPickupPool& GetPickupPool() = 0;
  [[nodiscard]] virtual IObjectPool& GetObjectPool() = 0;
};