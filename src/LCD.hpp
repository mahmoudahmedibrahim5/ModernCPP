#ifndef LCD_H
#define LCD_H

#include <iostream>

class LCD
{
    std::string text;
public:
    LCD();
    LCD(std::string _text);
    ~LCD();

    std::string operator+(std::string _text);
    LCD& operator+(LCD& l2);
    void setText(std::string _text);
    std::string getText(void);
};

#endif