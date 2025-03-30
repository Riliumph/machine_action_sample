#ifndef INCLUDE_ACTION_MOVE_MOVE_HPP
#define INCLUDE_ACTION_MOVE_MOVE_HPP
#include "action/action_if.hpp"
// STL
#include <iostream>

class Move : public Action
{
public:
  ~Move() {};
  void Execute() override { std::cout << "Move action executed." << std::endl; }
};
#endif // INCLUDE_ACTION_MOVE_MOVE_HPP
