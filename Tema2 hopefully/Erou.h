#pragma once
#include "Instanta.h"
class Erou :
    public Instanta
{
private:
    int SP;
    int SPR;
public:
    void setSP(int sp)
    {
        this->SP = sp;
    }
    void setSPR(int spr)
    {
        this->SPR = spr;
    }
    int getSP()
    {
        return SP;
    }
    int getSPR()
    {
        return SPR;
    }
    Erou(string name, int hp, int att, int def, int sp, int spr):Instanta(name,hp,att,def),SP{sp},SPR{spr}
    {
        cout << "Apare eroul cunoscut " << name << endl;
    }
    Erou():Instanta(),SP{0},SPR{0}
    {
        cout << "Apare un erou necunoscut..." << endl;
    }
    
    ~Erou()
    {
        cout << "Eroul se prabuseste..." << endl;
    }
};
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
    Enemy() :Instanta(), LVL{ 0 }
    {
        cout << "Apare un inamic necunoscut" << endl;
    }
    ~Enemy()
    {
        cout << "Inamicu a lesinat" << endl;
    }
};

