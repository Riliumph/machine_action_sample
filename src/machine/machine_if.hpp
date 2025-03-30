#ifndef INCLUDE_MACHINE_MACHINE_IF_HPP
#define INCLUDE_MACHINE_MACHINE_IF_HPP
// STL
#include <memory>
#include <vector>
// original
#include "action.hpp"
class ActionController
{
public:
  virtual ~ActionController() = default;
  virtual void AddAction(std::shared_ptr<Action>) = 0;
};
class ActionExecutor
{
public:
  virtual ~ActionExecutor() = default;
  virtual void Execute() = 0;
};

class Machine
  : public ActionController
  , public ActionExecutor
{
public:
  Machine() {};
  ~Machine() {};
  void AddAction(std::shared_ptr<Action> action) override
  {
    actions_.push_back(action);
  };
  void Execute() override
  {
    for (auto& action : actions_) {
      action->Execute();
    }
  };

protected:
  std::vector<std::shared_ptr<Action>> actions_;
};

#endif // INCLUDE_MACHINE_MACHINE_IF_HPP
