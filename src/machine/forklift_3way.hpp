#ifndef INCLUDE_MACHINE_FORKLIFT_3WAY_HPP
#define INCLUDE_MACHINE_FORKLIFT_3WAY_HPP
#include "machine_if.hpp"

class Forklift3Way : public Machine
{
public:
  Forklift3Way() {};
  ~Forklift3Way() {};
  void AddAction(std::shared_ptr<Action> action) override
  {
    if (dynamic_cast<Move*>(action.get())) {
      actions_.push_back(std::shared_ptr<Run>());
    } else {
      actions_.push_back(std::move(action));
    }
  }
};
#endif // INCLUDE_MACHINE_FORKLIFT_3WAY_HPP
