#ifndef SCREEN_H
#define SCREEN_H
#include <iostream>
#include <windows.h>
#include <Position.h>

using namespace std;

class Screen
{
    protected:
        COORD coord={0,0};
        void GotoXY(int,int);
    public:
        void DrawPixel(int, int, char);
        void DrawPixel(Position, char);
        void DeletePixel(int, int);
        void DeletePixel(Position);
};

#endif // SCREEN_H
