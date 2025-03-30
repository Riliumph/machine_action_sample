#ifndef INCLUDE_ACTION_LOAD_HPP
#define INCLUDE_ACTION_LOAD_HPP
#include "action_if.hpp"
// STL
#include <iostream>

class Load : public Action
{
public:
  Load() {};
  ~Load() {};
  void Execute() override
  {
    // printするだけ
    std::cout << "Execute Load" << std::endl;
  }
};
#endif // INCLUDE_ACTION_LOAD_HPP
