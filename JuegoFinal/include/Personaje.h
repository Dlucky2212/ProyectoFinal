#ifndef PERSONAJE_H
#define PERSONAJE_H
#include "Position.h"
#include <iostream>
#include "Screen.h"

using namespace std;


class Personaje:public Screen
{
    protected:
        Position pos;
        char shape;
        int cara;
    public:
        Personaje();
        Personaje(char);
        Personaje(Position, char);
        virtual void Draw();
        void SetShape(char);
        void Move(int, int);
        void ChangePos(Position h);
        int setcara(int dir);
        int getcara();
        Position GetPos();
        bool PosComp(Position a, Position b);
        ~Personaje();
};

#endif // PERSONAJE_H
