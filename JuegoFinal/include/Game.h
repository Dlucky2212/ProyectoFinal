#ifndef GAME_H
#define GAME_H
#include <time.h>
#include <MyWindow.h>
#include <Personaje.h>
#include <sstream>
#include <vector>

const char UP = 72;
const char LEFT = 75;
const char RIGHT = 77;
const char DOWN = 80;
const char ESC = 27;
const char SPACE = 32;

class Game
{
    protected:
        MyWindow *windowGame;
        MyWindow *windowBattle;
        Personaje *mY;
    public:
        const char UP = 72;
        const char LEFT = 75;
        const char RIGHT = 77;
        const char DOWN = 80;
        const char ESC = 27;
        const char SPACE = 32;
        Game();
        void Start();
        void Refresh();
        ~Game();
};

#endif // GAME_H
