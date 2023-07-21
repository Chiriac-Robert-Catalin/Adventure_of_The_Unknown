#pragma once
#include <iostream>
#include <cstring>
#include "Instanta.h"

using namespace std;

class Enemy :
    public Instanta
{
private:
    int LVL;
public:
    void setLvl(int lvl)
    {
        LVL = lvl;
    }
    int getLvl()
    {
        return LVL;
    }
    Enemy(string nume, int hp, int att, int def, int lvl) :Instanta(nume, hp, att, def), LVL{ lvl }
    {
        cout << "Apare un inamic nervos" << endl;
    }
    Enemy():Instanta(),LVL{0}
    {
        cout << "Apare un inamic necunoscut" << endl;
    }
    ~Enemy()
    {
        cout << "Inamicu a lesinat" << endl;
    }
};

