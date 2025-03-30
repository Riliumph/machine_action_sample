#ifndef INCLUDE_MACHINE_MACHINE_IF_HPP
#define INCLUDE_MACHINE_MACHINE_IF_HPP
class Machine
{
public:
  virtual ~Machine() = default;
  virtual void AddAction() = 0;
};
#endif // INCLUDE_MACHINE_MACHINE_IF_HPP
