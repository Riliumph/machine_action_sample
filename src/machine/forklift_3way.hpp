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

    if (dynamic_cast<Move*>(action.get()) != nullptr) {
      // Move系のアクションを受け取った場合
      if (dynamic_cast<Run*>(action.get()) != nullptr) {
        // Moveその物なら最適な物選択して登録
        actions_.push_back(std::make_shared<Run>());
      } else if (dynamic_cast<Fly*>(action.get()) != nullptr) {
        std::cout << "Forklift3Way: Fly action is not supported." << std::endl;
      }
    } else {
      std::cout << "Forklift3Way: Unknown action type." << std::endl;
      actions_.push_back(std::move(action));
    }
  }
};
#endif // INCLUDE_MACHINE_FORKLIFT_3WAY_HPP
