
#include <functional>

namespace loggercpp {

namespace interfaces {

class IMessage {

public:
  virtual void setCallback(std::function<void()> callback) = 0;
};

} // namespace interfaces

} // namespace loggercpp