#pragma once

#include "local_player.hpp"
#include "pool.hpp"
#include "remote_player.hpp"

constexpr std::uint16_t kMaxPlayers = 1004;

struct PlayerInfo {};

class IPlayerPool : public IPool<IPlayer, PlayerInfo> {
 public:
  [[nodiscard]] virtual ILocalPlayer& GetLocal(std::uint16_t id) = 0;
  [[nodiscard]] virtual IRemotePlayer& GetRemote(std::uint16_t id) = 0;
};