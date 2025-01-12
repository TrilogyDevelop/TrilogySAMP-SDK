#pragma once

#include <cstdint>
#include <string>

#include "../events.hpp"

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
  virtual void Connect(std::string host, std::uint16_t port,
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
  virtual void SetFakePingState(bool status) = 0;
  virtual void SetFakePing(std::uint32_t ping) = 0;
  [[nodiscard]] virtual std::uint32_t GetFakePing() const = 0;
  virtual void SetVersion(std::string version) = 0;
  virtual void SetProxy(std::string host, std::uint16_t port) = 0;
  [[nodiscard]] virtual bool IsUseProxy() const = 0;
  [[nodiscard]] virtual RakClientInterface& GetRakClientInterface() = 0;
};