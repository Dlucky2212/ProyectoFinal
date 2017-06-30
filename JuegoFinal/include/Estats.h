#ifndef ESTATS_H
#define ESTATS_H
#include <stdio.h>
#include <iostream>
#include <cctype>

using namespace std;

template <typename T>
class Estats
{
    public:
        T salud;
        T ataqf;
        T defef;
        T ataes;
        T defes;
        T vel;
        Estats(){};
        Estats(T a, T b, T c, T d, T e, T f): salud(a), ataqf(b), defef(c), ataes(d),defes(e) , vel(f){}
        void aume(){ ataqf+= 1; defef+=1; ataes+=1; defes+=1; vel+=1;}
        void mostrar(){
            cout <<"Ataque: "<< ataqf <<endl;
            cout <<"Defensa: " <<defef <<endl;
            cout <<"Ataque Esp: " <<ataes <<endl;
            cout <<"Defensa Esp: "<<defes <<endl;
            cout <<"Velocidad: "<< vel<<endl;
        }
        ~Estats();
};

#endif // ESTATS_H
