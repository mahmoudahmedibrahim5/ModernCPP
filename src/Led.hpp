#ifndef LED_H
#define LED_H

#pragma once

class Led
{
public:
    Led() = delete;
    //Led(int _led, bool _state);
    ~Led();
    void printState(void);

private:
    int led;
    bool state;
};

#endif