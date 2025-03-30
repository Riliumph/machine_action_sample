#ifndef INCLUDE_ACTION_MOVE_HPP
#define INCLUDE_ACTION_MOVE_HPP
#include "action_if.hpp"
// STL
#include <iostream>

class Move : public Action
{
public:
  Move() {};
  ~Move() {};
  void Execute() override
  {
    // printするだけ
    std::cout << "Execute Move" << std::endl;
  }
};
#endif // INCLUDE_ACTION_MOVE_HPP
