#pragma once

#include "local_player.hpp"
#include "pool.hpp"
#include "remote_player.hpp"

constexpr std::uint16_t kMaxPlayers = 1004;

class IPlayerPool : public IPool<IPlayer> {
 public:
  virtual bool Create(std::uint16_t id, const std::string& name) = 0;
  virtual ILocalPlayer& GetLocal(std::uint16_t id) const = 0;
  virtual IRemotePlayer& GetRemote(std::uint16_t id) const = 0;
};