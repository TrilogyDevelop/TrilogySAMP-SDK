#pragma once

#include <string>

template <class DataType>
class IPool {
 public:
  virtual void Destroy(std::uint16_t id) = 0;
  virtual std::uint16_t GetCount() const = 0;
  virtual DataType& Get() const = 0;
};