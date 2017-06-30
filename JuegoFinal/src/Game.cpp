#include "Game.h"
#include <time.h>
#include "MyWindow.h"
#include "Personaje.h"
#include <sstream>
#include <vector>
#include "Position.h"
#include "Mysize.h"
#include <iostream>
#include <conio.h>

using namespace std;

Game::Game()
{
    windowGame = new MyWindow(Mysize(30, 15),"Personaje..",Position(0,3));
    windowBattle = new MyWindow(Mysize(30,15),"Batalla..",Position(33,3));
    Position t = windowGame->GetPosition();
    t.x+=15;
    t.y+=7;
    mY = new Personaje(t,129);
    t.x = 10;
    t.y = 8;
    Mysize st=windowGame->GetMySize();
    t=windowGame->GetPosition();
    t.x++;
    t.y++;
    srand (time(NULL));
}
void Game::Refresh()
{
    mY->Draw();
}
void Game::Start()
{
    char c;
    bool endGame=false;
    windowGame->Draw();
    windowBattle->Draw();


    do
    {
        Position pb = mY->GetPos();
        if(kbhit())
        {
            c = getch();


            switch (c)
            {
                case 27:
                    break;
                case 32:
                    break;
                case 72:
                    mY->setcara(0);
                    mY->Move(0,-1);
                    break;
                case 80:
                    mY->setcara(1);
                    mY->Move(0,1);
                    break;
                case 75:
                    mY->setcara(2);
                    mY->Move(-1,0);
                    break;
                case 77:
                    mY->setcara(3);
                    mY->Move(1,0);
                    break;
            }
        }
    }while(!endGame);
    windowGame->ShowMessage(Position(0,22),"The End...");
}



Game::~Game()
{
    delete windowGame;
}
