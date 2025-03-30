#ifndef INCLUDE_ACTION_LOAD_SIDE_HPP
#define INCLUDE_ACTION_LOAD_SIDE_HPP
#include "action_if.hpp"
// STL
#include <iostream>

class LoadSide : public Action
{
public:
  LoadSide() {};
  ~LoadSide() {};
  void Execute() override
  {
    // printするだけ
    std::cout << "Execute LoadSide" << std::endl;
  }
};
#endif // INCLUDE_ACTION_LOAD_SIDE_HPP
