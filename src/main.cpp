#include <iostream>
#include <algorithm>
#include "screen.h"

void check(std::string& command)
{
    while(true)
    {
        auto it = std::find_if(command.begin(), command.end(), [](const char &c)
        {
             return !std::isalpha(c);
        });
        if(it == command.end())
            break;

        std::cout << "enter the correct command: ";
        getline(std::cin, command);
    }
}

int main()
{
    std::string command;
    std::cout << "The program control the desktop window." << std::endl;

    std::cout << "List of the commands: " << std::endl;
    std::cout << "move - vector to change the window to." << std::endl;
    std::cout << "resize - requests window size." << std::endl;
    std::cout << "display - image output to the console." << std::endl;
    std::cout << "close - the window and exit the program." << std::endl;

    while(true)
    {
        std::cout << "Enter the command: ";
        getline(std::cin, command);
        check(command);

        if(command == "close")
            break;
        else if(command == "move" || command == "resize" || command == "display")
            simulation(command);

    }
    return 0;
}
