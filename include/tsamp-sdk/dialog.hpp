#pragma once

#include <string>

class IDialog {
 public:
  virtual void Show(std::uint16_t id, std::uint8_t type,
                    const std::string& title, const std::string& left_button,
                    const std::string& right_button,
                    const std::string& text) = 0;
  virtual void Draw() = 0;
  virtual void Close(std::uint8_t response) = 0;
  virtual bool IsEnable() = 0;
};