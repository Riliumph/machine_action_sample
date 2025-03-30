#include "action.hpp"
#include "machine.hpp"
#include <iostream>
int
main()
{
  Forklift3Way forklift;
  Drone drone;

  forklift.AddAction(std::make_unique<Run>());
  drone.AddAction(std::make_unique<Fly>());

  std::cout << "Forklift executing actions:" << std::endl;
  forklift.Execute();
  std::cout << std::endl;
  std::cout << "Drone executing actions:" << std::endl;
  drone.Execute();
  return 0;
}
