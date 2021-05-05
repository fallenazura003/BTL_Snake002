#include "snake.hpp"
#include <iostream>
#include <stdexcept>

int main(int argc, char **argv)
{

  try
  {
    Snake s;
    return s.run();
  } catch (std::exception &e) //bắt exception
  {
    std::cerr << e.what() << std::endl;
    return 1;
  }
}
