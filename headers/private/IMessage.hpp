

#include <string>

namespace loggercpp {

namespace interfaces {

class IMessage {

public:
  IMessage() = default;
  ~IMessage() = default;
  IMessage(const IMessage &message) = delete;
  IMessage(IMessage &message) = delete;
  IMessage operator=(const IMessage &message) = delete;
  IMessage operator=(IMessage &message) = delete;
  virtual std::string toString() const = 0;
  virtual IMessage &operator<<(std::string) = 0;
};

} // namespace interfaces

} // namespace loggercpp