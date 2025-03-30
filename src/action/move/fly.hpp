#ifndef INCLUDE_ACTION_MOVE_FLY_HPP
#define INCLUDE_ACTION_MOVE_FLY_HPP
#include "move.hpp"
// STL
#include <iostream>

class Fly : public Move
{
public:
  Fly() {};
  ~Fly() {};
  void Execute() override
  {
    // printするだけ
    std::cout << "Execute Fly" << std::endl;
  }
};
#endif // INCLUDE_ACTION_MOVE_FLY_HPP
