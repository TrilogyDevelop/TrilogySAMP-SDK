#pragma once

class LoggerEventHandler {
  virtual bool OnLog(const std::string& text) { return true; };
};

class ILogger {
 public:
  virtual void Log(const std::string& text) = 0;
};