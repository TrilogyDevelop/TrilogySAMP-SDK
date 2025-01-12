#pragma once

#include "../entities/local_player.hpp"
#include "../entities/remote_player.hpp"
#include "pool.hpp"

constexpr std::uint16_t kMaxPlayers = 1004;

struct PlayerInfo {};

class IPlayerPool : public IPool<IPlayer, PlayerInfo> {
 public:
  [[nodiscard]] virtual ILocalPlayer& GetLocal(std::uint16_t id) = 0;
  [[nodiscard]] virtual IRemotePlayer& GetRemote(std::uint16_t id) = 0;
};