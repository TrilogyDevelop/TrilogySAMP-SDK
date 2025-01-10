#pragma once

#include <string>
#include <vector>

template <class EntityType, class InfoType>
class IPool {
 public:
  virtual void Create(InfoType& data) = 0;
  virtual void Destroy(std::uint16_t id) = 0;
  [[nodiscard]] virtual std::uint16_t GetCount() const = 0;
  [[nodiscard]] virtual EntityType& Get() const = 0;
  [[nodiscard]] virtual std::vector<EntityType>& GetAll() const = 0;
};