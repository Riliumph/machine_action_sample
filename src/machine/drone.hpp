#ifndef INCLUDE_MACHINE_DRONE_HPP
#define INCLUDE_MACHINE_DRONE_HPP
#include "machine_if.hpp"

class Drone : public Machine
{
public:
  Drone() {};
  ~Drone() {};
  void AddAction() override {};
};
#endif // INCLUDE_MACHINE_DRONE_HPP
