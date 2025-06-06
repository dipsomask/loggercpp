#include <chrono>
#include <string>

#include "IMessage.hpp"
#include "Types.hpp"

namespace loggercpp {

using Type = types::MessageType;

class Message : public interfaces::IMessage {

public:
  Message(
      Type type, std::string text,
      std::function<void()> callback = []() { return; });
  ~Message() = default;

  Message(const Message &message) = delete;
  Message(Message &message) = delete;
  Message operator=(const Message &message) = delete;
  Message operator=(Message &message) = delete;

  void setCallback(std::function<void()> callback) override;

private:
  std::chrono::system_clock::time_point p_dataTime;
  std::string p_text;
  Type p_type;
  std::function<void()> callback = []() { return; };
};

} // namespace loggercpp