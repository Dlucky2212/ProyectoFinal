#include "Personaje.h"
#include "Position.h"
#include <iostream>
#include "Screen.h"

using namespace std;

Personaje::Personaje(): pos(Position(0,0)),shape('è')
{

}

Personaje::Personaje(char c)
{
    pos.x=0;
    pos.y=0;
    shape=c;
}
Personaje::Personaje(Position p,char c)
{
    pos.x=p.x;
    pos.y=p.y;
    shape=c;
}
void Personaje::Draw()
{
    DrawPixel(pos,shape);
}
void Personaje::SetShape(char s)
{
    shape= s;
}
void Personaje::Move(int a, int b)
{
    Position j(pos.x+a,pos.y+b);
    DeletePixel(pos);
    pos=j;
}
Position Personaje::GetPos()
{
    return pos;
}
void Personaje::ChangePos(Position h)
{
    pos=h;
}
int Personaje::getcara()
{
   return cara;
}
int Personaje::setcara(int dir)
{
    cara=dir;
}
bool Personaje::PosComp(Position a,Position b)
{
    if (a.x==b.x)
    {
        if(b.y==a.y)
            return true;
        return false;
    }
}
