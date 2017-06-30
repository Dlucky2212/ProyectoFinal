#ifndef POKEMON_H
#define POKEMON_H
#include <iostream>
#include <string.h>
#include <stdio.h>
#include "Ataque.h"
#include "Estats.h"

using namespace std;

class Pokemon
{
    protected:
        string nombre;
        int tipo1;
        string tipo2;
        Ataque first;
        Ataque second;
        int nivel;
        Estats <int> prop;
    public:
        Pokemon();
        Pokemon(const string &a, int b, const string &c, Ataque d, Ataque e, int f, Estats<int>g): nombre(a), tipo1(b), tipo2(c), first(d), second(e), nivel(f), prop(g){}
        ~Pokemon();

};

#endif // POKEMON_H
