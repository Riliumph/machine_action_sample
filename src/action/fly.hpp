#ifndef INCLUDE_ACTION_FLY_HPP
#define INCLUDE_ACTION_FLY_HPP
#include "action_if.hpp"
// STL
#include <iostream>

class Fly : public Action
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
#endif // INCLUDE_ACTION_FLY_HPP
