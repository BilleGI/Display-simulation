#include <iostream>
#include "window.h"

const bool check(const int& i, const int& parameterDispl)
{
    return ((i >= 0) && (i < parameterDispl));
}

const bool check(const int& parametr)
{
    return parametr >= 0;
}

void Window::getMove(Screen& display)
{
    int newX;
    int newY;
    std::cout << "Enter the offset from the current position of the left point: " << std::endl;

    std::cout << "x = ";
    std::cin >> newX;
    while(!check((newX+x), display.widthDisplay()))
    {
        std::cout << "Enter the cerrect x: ";
        std::cin >> newX;
    }

    std::cout << "y = ";
    std::cin >> newY;
    while(!check((newY+y), display.heightDisplay()))
    {
        std::cout << "Enter the cerrect y: ";
        std::cin >> newY;
    }

    x += newX;
    y += newY;
    std::cout << "The new coordinates. x= " << x << " y = " << y << std::endl;
    std::cin.get();
}

void Window::getSize(Screen& display)
{
    int newWidth;
    int newHeight;
    std::cout << "Enter the new window size: " << std::endl;

    std::cout << "Whidth = ";
    std::cin >> newWidth;
    while(!check(newWidth))
    {
        std::cout << "Enter the correct width: " << std::endl;
        std::cin >> newWidth;
    }

    std::cout << "Height: ";
    std::cin >> newHeight;
    while(!check(newHeight))
    {
        std::cout << "Enter the correct height: " << std::endl;
        std::cin >> newHeight;
    }

    width = newWidth;
    height = newHeight;
    std::cout << "The new size: width - " << width << " height - " << height << std::endl;
    std::cin.get();
}


