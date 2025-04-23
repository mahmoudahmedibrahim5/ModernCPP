#include "LCD.hpp"

LCD::LCD()
{
    text = "";
}

LCD::LCD(std::string _text):text(_text)
{
    
}

LCD::~LCD()
{

}

LCD& LCD::operator+(LCD& l2)
{
    this->text += l2.getText();
    return *this;
}

std::string LCD::operator+(std::string _text)
{
    return this->text + _text;
}

void LCD::setText(std::string _text)
{
    this->text = _text;
}

std::string LCD::getText(void)
{
    return text;
}
