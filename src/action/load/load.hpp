#ifndef INCLUDE_ACTION_LOAD_HPP
#define INCLUDE_ACTION_LOAD_HPP
#include "action_if.hpp"
// STL
#include <iostream>

class Load : public Action
{
public:
  ~Load() {};
  void Execute() override { std::cout << "Load action executed." << std::endl; }
};
#endif // INCLUDE_ACTION_LOAD_HPP
