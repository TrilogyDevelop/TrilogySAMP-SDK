#pragma once

#include <string>

enum DIALOG_TYPE : std::uint8_t {
  DIALOG_TYPE_MESSAGEBOX,
  DIALOG_TYPE_INPUT,
  DIALOG_TYPE_LIST,
  DIALOG_TYPE_PASSWORD,
  DIALOG_TYPE_TABLIST,
  DIALOG_TYPE_HEADERSLIST
};

class IDialog {
 public:
  virtual void Show(std::uint16_t id, DIALOG_TYPE type,
                    const std::string& title, const std::string& left_button,
                    const std::string& right_button,
                    const std::string& text) = 0;
  virtual void Draw() = 0;
  virtual void Close(std::uint8_t response) = 0;
  [[nodiscard]] virtual bool IsEnable() const = 0;
};