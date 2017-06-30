#ifndef MYWINDOW_H
#define MYWINDOW_H
#include "Mysize.h"
#include "Position.h"
#include <iostream>
#include <string.h>
#include "Screen.h"

using namespace std;

class MyWindow: public Screen
{
    protected:
        Position pos;
        Mysize mwSize;
        string title;
        void DrawHorizontalLine(int,int,int, char);
        void DrawVerticalLine(int,int,int, char);
    public:
        MyWindow();
        MyWindow(string);
        MyWindow(Mysize);
        MyWindow(Mysize, string, Position p);
        void ShowMessage(Position,string);
        void Draw();
        void SetTitle(string t){title=t;}

        inline Position GetPosition(){return pos;}
        inline Mysize GetMySize(){return mwSize;}
        inline string GetTitle(){return title;}
        ~MyWindow();
};

#endif // MYWINDOW_H
