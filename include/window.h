#pragma once
#include "screen.h"

struct Window
{
private:
    int width = 0;
    int height = 0;
    int x = 0;
    int y = 0;
public:
    void getMove(Screen& display);
    void getSize(Screen& display);    

    int widthWindow();
    int heightWindow();
    int coordinateX();
    int coordinateY();
};
