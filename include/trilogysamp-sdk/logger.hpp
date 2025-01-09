#pragma once

class ILoggerEventHandler {
  virtual bool OnLog(const std::string& text) { return true; };
};

class ILogger {
 public:
  [[nodiscard]] virtual EventDispatcher<ILoggerEventHandler>&
  GetEventDispatcher() const = 0;

  virtual void Log(const std::string& text) = 0;
};