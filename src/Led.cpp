#include "Led.hpp"
#include <iostream>

// Led::Led()
// {

// }

// Led::Led(int _led, bool _state): led(_led), state(_state)
// {

// }

Led::~Led()
{

}

void Led::printState(void)
{
    std::cout << "State of led " << this->led << " is " << std::boolalpha << this->state << std::endl;
}
