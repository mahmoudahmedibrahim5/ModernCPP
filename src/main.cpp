#include <iostream>
#include "Led.hpp"
#include "LCD.hpp"


int main()
{
    LCD display;
    display.setText("Hello");

    LCD space{" "};
    LCD world {"World"};

    LCD result;
    LCD text;
    text = result + display + space + world;
    std::cout << result.getText() << std::endl;
    std::cout << text.getText() << std::endl;
    return 0;
}
