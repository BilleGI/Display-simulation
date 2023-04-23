#pragma once
#include <string>

struct Window;

struct Screen
{
    private:
        static const int width = 80;
        static const int height = 50;
        char shield[height][width];

    public:
        void display(Window& window);
        void print();
        int widthDisplay();
        int heightDisplay();
};

void simulation(std::string& command);
