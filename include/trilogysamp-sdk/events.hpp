#pragma once

#include <list>

template <class EventHandlerType>
class EventDispatcher {
 private:
  std::list<EventHandlerType*> handlers;

 public:
  bool AddEventHandler(EventHandlerType* handler) {
    if (handler == nullptr) return false;
    handlers.push_back(handler);
    return true;
  }

  bool RemoveEventHandler(EventHandlerType* handler) {
    if (handler == nullptr) return false;
    handlers.remove(handler);
    return true;
  }

  bool HasEventHandler(EventHandlerType* handler) {
    if (handler == nullptr) return false;
    return handlers.find(handler) != handlers.end();
  }
};