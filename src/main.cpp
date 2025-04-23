#include <iostream>
#include "Led.hpp"
#include "LCD.hpp"

int x = 10;
int& func(void)
{
    return x;
}

int f(int a, int b)
{
    std::cout << "f" << std::endl;
    return a + b;
}

int main()
{
    func() = 5;
    std::cout << x << std::endl;

    int a = 7;
    int b = 9;
    int c = f(a, b);
    std::cout << c << std::endl;

    int z = 7;
    int && y = std::move(z);
    (void)z;
    std::cout << &y << std::endl;
    std::cout << &z << std::endl;
    return 0;
}
