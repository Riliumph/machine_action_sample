#ifndef INCLUDE_ACTION_LOAD_SIDE_HPP
#define INCLUDE_ACTION_LOAD_SIDE_HPP
#include "load.hpp"
// STL
#include <iostream>

class LoadFront : public Load
{
public:
  LoadFront() {};
  ~LoadFront() {};
  void Execute() override
  {
    // printするだけ
    std::cout << "Execute LoadFront" << std::endl;
  }
};
#endif // INCLUDE_ACTION_LOAD_SIDE_HPP
