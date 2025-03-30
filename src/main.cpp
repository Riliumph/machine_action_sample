#include "action.hpp"
#include "machine.hpp"
#include <iostream>
int
main()
{
  Forklift3Way forklift;
  Drone drone;

  forklift.AddAction(std::make_shared<Move>());
  forklift.AddAction(std::make_shared<Run>());
  forklift.AddAction(std::make_shared<Fly>());
  drone.AddAction(std::make_shared<Fly>());

  std::cout << "Forklift executing actions:" << std::endl;
  forklift.Execute();
  std::cout << std::endl;
  std::cout << "Drone executing actions:" << std::endl;
  drone.Execute();
  return 0;
}
