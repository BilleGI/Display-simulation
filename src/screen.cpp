#include <iostream>
#include "window.h"
#include "screen.h"

int Screen::widthDisplay()
{
    return width;
}

int Screen::heightDisplay()
{
    return height;
}

void simulation(std::string& command)
{
    static Screen display;
    static Window box;

    if(command == "move")
        box.getMove(display);

    else if(command == "resize")
    {
        box.getSize(display);
    }

    else if (command == "display")
    {
        display.display(box);
        display.print();
    }
}

int Window::coordinateX()
{
    return x;
}

int Window::widthWindow()
{
    return width;
}

int Window::coordinateY()
{
    return y;
}

int Window::heightWindow()
{
    return height;
}

void Screen::display(Window& window)
{
    for (int i = 0; i < height; ++i)
    {
        for (int j = 0; j < width; ++j)
        {
            if((window.widthWindow() > 0 && window.heightWindow() > 0) &&
                (j>=window.coordinateX() && j < (window.coordinateX() + window.widthWindow())) &&
                (i>=window.coordinateY() && i < (window.coordinateY() + window.heightWindow())))
                  shield[i][j] = '1';
            else
                  shield[i][j] = '0';

        }
    }
}

void Screen::print()
{
    for(int i = 0; i < height; ++i)
    {
        for(int j = 0; j < width; ++j)
        {
            std::cout << shield[i][j];
        }
        std::cout << std::endl;
    }
}
