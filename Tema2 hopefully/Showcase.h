#pragma once
#include <iostream>
#include "Instanta.h"
using namespace std;
class Showcase
{
public:
	void ShowStatsEnemy(Enemy X)
	{
		cout << "// STATURI INAMIC ---------------------------------------//" << endl;
		cout << "Nume : " << X.getName() << endl;
		cout << "HP = " << X.getHP() << "      " << "ATT = " << X.getATT() << "        " << "DEF = " << X.getDEF() << endl;
		cout << "STATURI ARMA ----------------------" << endl;
		cout << "Att= " << X.Weapon.getATTI() << " Def= " << X.Weapon.getDEFI() << endl;
		cout << "//-------------------------------------------------------//" << endl;
	}
	void ShowStatsHero(Erou X, int ok)
	{
		
			cout << "// STATURI EROU -----------------------------------------//" << endl;
			cout << "HP = " << X.getHP() << "      " << "ATT = " << X.getATT() << "        " << "DEF = " << X.getDEF() << endl;
			cout << "SP = " << X.getSP() << "      " << "SPR = " << X.getSPR() << "        " << "SPC = " << X.getSPC() << endl;
			cout << "STATURI ARMA ----------------------" << endl;
			cout << "Att= " << X.Weapon.getATTI() << " Def= " << X.Weapon.getDEFI() << endl;
			if (ok == 1)
				cout << "Poti sa te aperi" << endl;
			else
				cout << "Nu poti sa te aperi, doar sa ataci sau sa te odihnesti" << endl;
			cout << "//-------------------------------------------------------//" << endl;
		
	}
};

