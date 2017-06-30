#ifndef ATAQUE_H
#define ATAQUE_H
#include <string.h>
#include <stdio.h>
#include <iostream>
#include "Estats.h"

using namespace std;

class Ataque
{
    public:
        int pot;
        string tecnica;
        int tipoc;
        string tipoa;
        Ataque();
        Ataque(int a, const string &b, int c, const string &d):pot(a), tecnica(b), tipoc(c), tipoa(d){}
        virtual ~Ataque();

};

#endif // ATAQUE_H
