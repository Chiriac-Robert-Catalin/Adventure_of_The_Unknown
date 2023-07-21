#pragma once
#include <iostream>
#include <cstring>
#include <time.h>
#include "Actiuni.h"
#include "Item.h"
using namespace std;
//INITIAL IMI DADEAU ERORI CAND INCLUDEAM IN FISIERUL SOURCE.CPP MAI MULTE HEADERE
// AM AFLAT CU 2 ORE INAINTE DE DEADLINE, DUPA CE AM PROGRAMAT TOATE FUNCTIILE
// CA #PRAGMA ONCE REZOLVA ACEASTA PROBLEMA
// 
// DIN ACEASTA CAUZA CLASELE INSTANTA,EROU SI ENEMY CARE MOSTENESC CLASA INSTANTA SI CLASA BOSS CARE MOSTENESTE CLASA ENEMY
// SUNT IN ACELASI HEADER SI NU AU HEADERE SEPARATE
// 
//CLASA INSTANTA
class Instanta : public Actiuni
{
private:
	string NAME;
	int HP;
	int ATT;
	int DEF;
    
    

public:
    Item Weapon;
    //Setteri si getteri
	void setName(string name)
	{
		this->NAME = name;
	}
	void setHP(int hp)
	{
		this->HP = hp;
	}
	void setATT(int att)
	{
		this->ATT = att;
	}
	void setDEF(int def)
	{
		this->DEF;
	}
	string getName()
	{
		return NAME;
	}
	int getHP()
	{
		return HP;
	}
	int getATT()
	{
		return ATT;
	}
	int getDEF()
	{
		return DEF;
	}
    //Constructori si Deconstructori
    

	Instanta(string name, int hp, int att, int def,int x,int y, int z):NAME{name},HP{hp},ATT{att},DEF{def}
	{
        this->Weapon.setATTI(x);
        this->Weapon.setDEFI(y);
        this->Weapon.setSPI(z);
		cout << "a aparut " << NAME << endl;
	}
    Instanta() :Instanta{ "",0,0,0,0,0,0 }
	{
        this->Weapon.setATTI(0);
        this->Weapon.setDEFI(0);
        this->Weapon.setSPI(0);
		cout << "Apare cineva necunoscut"<<endl;
	}
    ~Instanta()
    {
        cout << "Cineva a lesinat..." << endl;
    }
	
    //Functii interfata
    virtual int atac(int a) override
    {
        cout << "Se intensifica actiunea!" << endl;
        return 0;
    }
    virtual void apara()override
    {
        cout << "El se pregateste sa nu fie lovit..." << endl;
    }
    
};
//CLASA EROU
class Erou : public Instanta
{
private:
    int SPC;
    int SPR;
    int SP;
   
public:
    
    //Setteri si getteri
    void setSP(int sp)
    {
        this->SP = sp;
    }
    void setSPR(int spr)
    {
        this->SPR = spr;
    }
    void setSPC(int spc)
    {
        this->SPC = spc;
    }
    int getSP()
    {
        return SP;
    }
    int getSPR()
    {
        return SPR;
    }
    int getSPC()
    {
        return SPC;
    }
    //Constructori
    Erou(string name, int hp, int att, int def, int spc, int sp, int spr,int x,int y,int z) :Instanta(name, hp, att, def,x,y,z), SPC{ spc }, SP{ sp }, SPR{ spr }
    {

        cout << "Apare eroul cunoscut " << name << endl;
    }
    Erou() :Instanta(), SPC{ 0 }, SP{ 0 }, SPR{ 0 }
    {
        
        cout << "Apare un erou necunoscut..." << endl;
    }

    ~Erou()
    {
        cout << "Eroul se retrage..." << endl;
    }
    //Interfata
    virtual int atac(int a) override
    {
        srand(time(NULL));
        cout << "Se intensifica actiunea! Eroul pregateste un atac" << endl;
        int prob;
        prob = rand() % 10 + 1;
        int ok;
        if (prob <= a)
        {
            cout << "// LOVIT // " << endl;
            ok = 1;
        }
        else
        {
            cout << " // RATAT // " << endl;
            ok = 0;
            
        }
        return ok;
        
    }
    virtual void apara() override
    {
        cout << "Eroul se pregateste sa nu fie lovit... O miscare inteleapta din partea eroului" << endl;
    }
    virtual void odihneste() override
    {
        cout << " Eroul se odihneste... Isi aduna puterile" << endl;
    }
};

//CLASA ENEMY

class Enemy : public Instanta
{
private:
    int LVL;
    int AGRO;
public:
    //Setteri si getteri
    void setLvl(int lvl)
    {
        LVL = lvl;
    }
    void setAGRO(int agro)
    {
        AGRO = agro;
    }
    int getAGRO()
    {
        return AGRO;
    }
    int getLvl()
    {
        return LVL;
    }
    //Constructori
    Enemy(string nume, int hp, int att, int def, int lvl,int x,int y,int agro) :Instanta(nume, hp, att, def,x,y,0), LVL{ lvl },AGRO{agro}
    {
        cout << "Apare un inamic nervos" << endl;
    }
    Enemy() :Instanta(), LVL{ 0 },AGRO{0}
    {
        cout << "Apare un inamic necunoscut" << endl;
    }
    ~Enemy()
    {
        cout << "Inamicu s-a retras" << endl;
    }
    //Interfata
    virtual int atac( int a) override
    {
        srand(time(NULL));
        int prob = rand() % 10 + 1;
        cout << "Se intensifica actiunea! Sper ca rateaza inamicul" << endl;
        int ok;
        if (prob <= a)
        {
            cout << "// LOVIT // " << endl;
            ok = 1;
        }
        else
        {
            cout << " // RATAT // " << endl;
            ok = 0;

        }
        return ok;
    }
    virtual void apara()override
    {
        cout << "Inamicu se pregateste sa nu fie lovit... Nu se lasa doborat usor" << endl;
    }
    virtual void odihneste() override
    {
        cout << " Inamicu se odihneste... Acum e sansa sa il ataci!" << endl;
    }
};

//CLASA BOSS
class Boss : public Enemy
{
private:
    double Inaltime;
    string Titlu;
    string Descriere;
public:
    void setInaltime(float a)
    {
        Inaltime = a;
    }
    void setTitlu(string a)
    {
        Titlu = a;
    }
    void setDescriere(string a)
    {
        Descriere = a;
    }
    double getInaltime()
    {
        return Inaltime;
    }
    string getTitlu()
    {
        return string(Titlu);
    }
    string getDescriere()
    {
        return string(Descriere);
    }
    Boss() :Enemy(), Inaltime{ 0 }, Titlu{ "" }, Descriere{ "" }
    {
        cout << "Din departare apare o figura infricosatoare..." << endl;
    }
    Boss(string nume, int hp, int att, int def, int lvl, int x, int y, int agro, double inaltime, string a, string b):Enemy(nume,hp,att,def,lvl,x,y,agro),Inaltime{inaltime},Titlu{a},Descriere{b}
    {
        cout << "CU FATA INCREMENITA EROUL RECUNOASTE INAMICUL!" << endl;
    }
    ~Boss()
    {
        cout << "Fiinta mitica se retrage..." << endl;
    }
};