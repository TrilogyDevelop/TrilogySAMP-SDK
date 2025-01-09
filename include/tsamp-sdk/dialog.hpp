#pragma once

#include <string>

enum DIALOG_TYPE : std::uint8_t {

};

class IDialog {
 public:
  virtual void Show(std::uint16_t id, DIALOG_TYPE type,
                    const std::string& title, const std::string& left_button,
                    const std::string& right_button,
                    const std::string& text) = 0;
  virtual void Draw() = 0;
  virtual void Close(std::uint8_t response) = 0;
  virtual bool IsEnable() = 0;
};