#pragma once

#include <string>

template <class DataType>
class IPool {
 public:
  virtual void Destroy(std::uint16_t id) = 0;
  [[nodiscard]] virtual std::uint16_t GetCount() const = 0;
  [[nodiscard]] virtual DataType& Get() const = 0;
};