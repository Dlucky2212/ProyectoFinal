#include "MyWindow.h"
#include <iostream>
#include "Mysize.h"
#include "Position.h"
#include <iostream>
#include <string.h>
#include "Screen.h"

using namespace std;


MyWindow::MyWindow()
{
    pos = Position(0,0);
    mwSize=Mysize(80,20);
    title=string("MyWindow");
}

MyWindow::MyWindow(string t)
{
    pos = Position(0,0);
    mwSize=Mysize(80,20);
    title=t;
}

MyWindow::MyWindow(Mysize s)
{
    pos = Position(0,0);
    mwSize = s;
    title=string("MyWindow");
}


MyWindow::MyWindow(Mysize s, string t, Position p): mwSize(s), title(t), pos(p)
{

}

void MyWindow::ShowMessage(Position p,string message)
{
    GotoXY(p.x,p.y);
    cout<<message;
}

void MyWindow::DrawHorizontalLine(int xi,int xf,int y, char c)
{
    int i=xi;
    while(i<xf)
        DrawPixel(i++,y,c);
}

void MyWindow::DrawVerticalLine(int yi,int yf,int x, char c)
{
    int i=yi;
    while(i<yf)
        DrawPixel(x,i++,c);
}

void MyWindow::Draw()
{
    // the Title
    int tamTitle=title.length();
    int l=(mwSize.width-tamTitle)/2;
    char c=127;

    DrawHorizontalLine(pos.x, pos.x + l-1, pos.y, c);
    ShowMessage(Position(pos.x + l,pos.y), title);
    DrawHorizontalLine(pos.x + l + tamTitle+1, pos.x + mwSize.width, pos.y, c);
    DrawHorizontalLine(pos.x, pos.x + mwSize.width, pos.y + mwSize.height - 1, c);
    DrawVerticalLine(pos.y ,pos.y + mwSize.height - 1, pos.x, c);
    DrawVerticalLine(pos.y, pos.y + mwSize.height-1, pos.x + mwSize.width - 1, c);
}

MyWindow::~MyWindow()
{
}
