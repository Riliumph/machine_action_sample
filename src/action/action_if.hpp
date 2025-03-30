#ifndef INCLUDE_ACTION_ACTION_IF_HPP
#define INCLUDE_ACTION_ACTION_IF_HPP
class Action
{
public:
  virtual ~Action() = default;
  virtual void Execute() = 0;
};
#endif // INCLUDE_ACTION_ACTION_IF_HPP
