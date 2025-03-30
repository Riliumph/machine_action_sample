#ifndef INCLUDE_ACTION_MOVE_RUN_HPP
#define INCLUDE_ACTION_MOVE_RUN_HPP
#include "move.hpp"
// STL
#include <iostream>

class Run : public Move
{
public:
  Run() {};
  ~Run() {};
  void Execute() override
  {
    // printするだけ
    std::cout << "Execute Run" << std::endl;
  }
};
#endif // INCLUDE_ACTION_MOVE_RUN_HPP
