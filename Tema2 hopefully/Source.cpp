#pragma once
#include <iostream>
#include <cstring>
#include <stdlib.h>
#include <time.h>
#include "Instanta.h"
#include "Loot.h"
using namespace std;
//HERO CREATOR
Erou CreareErou()
{
	Erou Player;
	string numeT;
	int T1, HPT, T2, ATTT, T3, DEFT, T4, SPT, T5, SPRT, CP = 15, k = 0,arma,ATTIT,DEFIT,SPIT;
	cout << "Cum il va chema pe erou? "; cin >> numeT;
	bool ok1 = false, ok2 = false, ok3 = false, ok4 = false, ok5 = false, okw = false,  ok = false;
	cout << "Pentru a crea eroul vei avea 15 puncte pe care va trebui sa le imparti in toate cele 5 atribute ale eroului" << endl;
	cout << "Vei alege un numar de la 1 la 5 si astfel vei determina cat HP, attack, defense sau stamina va avea caracterul tau" << endl;
	do
	{
		ok = true;
		do
		{
			ok1 = true;
			cout << "Mai ai " << CP << " character points" << endl;
			cout << "0-------10 Hit Points" << endl;
			cout << "1-------20 HP" << endl;
			cout << "2-------40 HP" << endl;
			cout << "3-------60 HP" << endl;
			cout << "4-------80 HP" << endl;
			cout << "5-------100 HP" << endl;
			cout << "--------------------------------------------------------------------" << endl;
			cin >> T1;
			cout << "--------------------------------------------------------------------" << endl;
			switch (T1)
			{
			case 0:HPT = 10; break;
			case 1:HPT = 20; CP = CP - 1; break;
			case 2:HPT = 40; CP = CP - 2; break;
			case 3:HPT = 60; CP = CP - 3; break;
			case 4:HPT = 80; CP = CP - 4; break;
			case 5:HPT = 100; CP = CP - 5; break;
			default: cout << "Ai introdus gresit, introdu din nou!" << endl; ok1 = false; break;
			}

		} while (ok1 == false);
		do
		{
			ok2 = true;
			cout << "Mai ai " << CP << " character points" << endl;
			cout << "0-------1 ATTack" << endl;
			cout << "1-------2 ATT" << endl;
			cout << "2-------4 ATT" << endl;
			cout << "3-------6 ATT" << endl;
			cout << "4-------8 ATT" << endl;
			cout << "5-------10 ATT" << endl;
			cout << "--------------------------------------------------------------------" << endl;
			cin >> T2;
			cout << "--------------------------------------------------------------------" << endl;
			switch (T2)
			{
			case 0: ATTT = 1; break;
			case 1:ATTT = 2; CP = CP - 1; break;
			case 2:ATTT = 4; CP = CP - 2; break;
			case 3:ATTT = 6; CP = CP - 3; break;
			case 4:ATTT = 8; CP = CP - 4; break;
			case 5:ATTT = 10; CP = CP - 5; break;
			default: cout << "Ai introdus gresit, introdu din nou!" << endl; ok2 = false; break;
			}

		} while (ok2 == false);
		do
		{
			ok3 = true;
			cout << "Mai ai " << CP << " character points" << endl;
			cout << "0-------1 DEFense" << endl;
			cout << "1-------2 DEF" << endl;
			cout << "2-------4 DEF" << endl;
			cout << "3-------6 DEF" << endl;
			cout << "4-------8 DEF" << endl;
			cout << "5-------10 DEF" << endl;
			cout << "--------------------------------------------------------------------" << endl;
			cin >> T3;
			cout << "--------------------------------------------------------------------" << endl;
			switch (T3)
			{
			case 0:DEFT = 1; break;
			case 1:DEFT = 2; CP = CP - 1; break;
			case 2:DEFT = 4; CP = CP - 2; break;
			case 3:DEFT = 6; CP = CP - 3; break;
			case 4:DEFT = 8; CP = CP - 4; break;
			case 5:DEFT = 10; CP = CP - 5; break;
			default: cout << "Ai introdus gresit, introdu din nou!" << endl; ok3 = false; break;
			}

		} while (ok3 == false);
		do
		{
			ok4 = true;
			cout << "Mai ai " << CP << " character points" << endl;
			cout << "0-------5 Stamina Points Capacity" << endl;
			cout << "1-------6 SPC" << endl;
			cout << "2-------7 SPC" << endl;
			cout << "3-------8 SPC" << endl;
			cout << "4-------9 SPC" << endl;
			cout << "5-------10 SPC" << endl;
			cout << "--------------------------------------------------------------------" << endl;
			cin >> T4;
			cout << "--------------------------------------------------------------------" << endl;
			switch (T4)
			{
			case 0:SPT = 5; break;
			case 1:SPT = 6; CP = CP - 1; break;
			case 2:SPT = 7; CP = CP - 2; break;
			case 3:SPT = 8; CP = CP - 3; break;
			case 4:SPT = 9; CP = CP - 4; break;
			case 5:SPT = 10; CP = CP - 5; break;
			default: cout << "Ai introdus gresit, introdu din nou!" << endl; ok4 = false; break;
			}

		} while (ok4 == false);
		if (CP < 0)
		{
			ok = false;
		}
		do
		{
			ok5 = true;
			cout << "Mai ai " << CP << " character points" << endl;
			cout << "0-------0 Stamina Points Regeneration" << endl;
			cout << "1-------1 SPR" << endl;
			cout << "2-------2 SPR" << endl;
			cout << "3-------3 SPR" << endl;
			cout << "4-------4 SPR" << endl;
			cout << "5-------5 SPR" << endl;
			cout << "--------------------------------------------------------------------" << endl;
			cin >> T5;
			cout << "--------------------------------------------------------------------" << endl;
			switch (T5)
			{
			case 0:SPRT = 0; break;
			case 1:SPRT = 1; CP = CP - 1; break;
			case 2:SPRT = 2; CP = CP - 2; break;
			case 3:SPRT = 3; CP = CP - 3; break;
			case 4:SPRT = 4; CP = CP - 4; break;
			case 5:SPRT = 5; CP = CP - 5; break;
			default: cout << "Ai introdus gresit, introdu din nou!" << endl; ok5 = false; break;
			}

		} while (ok5 == false);
		if (CP < 0)
		{
			ok = false;
		}
		do
		{
			okw = true;
			cout << "Alegeti arma:" << endl;
			cout << "1-----------Sabia de lemn care sigur nu e o creanga: Att=1, Def=2,SP= -2" << endl;
			cout << "2-----------Sabia de plastic cu luminite:Att=1,Def=1,SP= -1" << endl;
			cout << "3-----------Sabia de fier luata de pe Emag:Att=3,Def=2,SP=-3" << endl;
			cout << "--------------------------------------------------------------------" << endl;
			cin >> arma;
			cout << "--------------------------------------------------------------------" << endl;
			switch (arma)
			{
			case 1:
				ATTIT = 1;
				DEFIT = 2;
				SPIT = 2;
				break;
			case 2:
				ATTIT = 1;
				DEFIT = 1;
				SPIT = 1;
				break;
			case 3:
				ATTIT = 3;
				DEFIT = 2;
				SPIT = 3;
				break;
			default:
				okw = false;
				cout << "Ai introdus gresit..." << endl;
				break;
			}
		} while (okw == false);
		if (ok == false)
		{
			cout << "ai depasit limita, refa eroul!" << endl;
			CP = 15;
		}
	} while (ok == false);
	
	Player = Erou(numeT, HPT, ATTT, DEFT, SPT-SPIT, SPT-SPIT, SPRT, ATTIT,DEFIT,SPIT);
	return Player;
}
//ENEMY CREATOR
Enemy CreareInamic()
{
	Enemy Inamic;
	int Level, eHP, eATT, eDEF,eLVL,eATTI,eDEFI,eAGRO;
	string eName;
	bool eOK = false;
	srand(time(NULL));
	do {
		eOK = true;
		cout << "//------------------------------------//" << endl;
		cout << "Introdu dificultate (1-3) "; cin >> Level;
		cout << "//------------------------------------//" << endl;
		switch (Level)
		{
		case 1:
		{
			eHP = rand() % 20 + 1;
			eATT = rand() % 5 + 1;
			eDEF = rand() % 5 + 1;
			eLVL = 1;
			eATTI = 1;
			eDEFI = 1;
			eAGRO = 2;
			eName = "Ciobanu";
			break;
		}
		case 2:
		{
			eHP = rand() % 40 + 20;
			eATT = rand() % 7 + 3;
			eDEF = rand() % 7 + 3;
			eLVL = 2;
			eATTI = 1;
			eDEFI = 2;
			eAGRO = 3;
			eName = "Gardianu";
			break;
		}
		case 3:
		{
			eHP = rand() % 20 + 40;
			eATT = rand() % 5 + 5;
			eDEF = rand() % 5 + 5;
			eLVL = 3;
			eATTI = 3;
			eDEFI = 2;
			eAGRO = 4;
			eName = "Boxeru";
			break;
		}
		default: {
			cout << "Dificultate introdusa gresita";
			eOK = false;
			break;
		}
		}
	} while (eOK == false);
	Inamic = Enemy(eName, eHP, eATT, eDEF, eLVL,eATTI,eDEFI,eAGRO);
	return Inamic;
}
//SHOW STATS ENEMY AND HERO
void ArataStatsE(Erou X,int ok)
{
	cout << "// STATURI EROU -----------------------------------------//" << endl;
	cout << "HP = " << X.getHP() << "      " << "ATT = " << X.getATT() << "        " << "DEF = " << X.getDEF() << endl;
	cout << "SP = " << X.getSP() << "      " << "SPR = " << X.getSPR() << "        " << "SPC = "<< X.getSPC() << endl;
	cout << "STATURI ARMA ----------------------" << endl;
	cout << "Att= " << X.Weapon.getATTI() << " Def= " << X.Weapon.getDEFI() << endl;
	if (ok == 1)
		cout << "Poti sa te aperi" << endl;
	else
		cout << "Nu poti sa te aperi, doar sa ataci sau sa te odihnesti" << endl;
	cout << "//-------------------------------------------------------//" << endl;
}
void ArataStatsI(Enemy X)
{
	cout << "// STATURI INAMIC ---------------------------------------//" << endl;
	cout << "Nume : " << X.getName() << endl;
	cout << "HP = " << X.getHP() << "      " << "ATT = " << X.getATT() << "        " << "DEF = " << X.getDEF() << endl;
	cout << "STATURI ARMA ----------------------" << endl;
	cout << "Att= " << X.Weapon.getATTI() << "Def= " << X.Weapon.getDEFI() << endl;
	cout << "//-------------------------------------------------------//" << endl;
}

//ATAC EROU
void AtacErou(Erou &Erou, int a, Enemy &Inamic)
{
	int  att_input_ok, ok = 1;;
	do
	{
		att_input_ok = 1;
		if (a <= Erou.getSP())
			att_input_ok = 1;
		else
		{
			cout << "Ai introdus o valoare prea mare, vom introduce cat stamina ai tu acum" << endl;
			ok = 0;
			AtacErou(Erou, Erou.getSP(), Inamic);
		}
	} while (att_input_ok == 0);
	if (Erou.atac(a) == 1 && ok==1)
	{
		cout << "HP INAMIC:" << Inamic.getHP() << endl;
		if (2 * Erou.getATT() > Inamic.getDEF())
			Inamic.setHP(Inamic.getHP() - (2 * Erou.getATT()+Erou.Weapon.getATTI()) + Inamic.getDEF());
		else
			Inamic.setHP(Inamic.getHP() - 1);
		cout << "HP INAMIC DUPA LOVITURA: " << Inamic.getHP()<<endl;
	}
	if (ok)
	{
		cout << "STAMINA INAINTE DE LOVITURA " << Erou.getSP() << endl;
		Erou.setSP(min(Erou.getSPC(), (Erou.getSP() - a + Erou.getSPR())));
		cout << "STAMINA DUPA LOVITURA " << Erou.getSP() << endl;
	}
	cout << "//------------------------------------------------------------//" << endl;
	cout << endl;
	cout << endl;
}
//APARA EROU
//OKP reprezinta daca playerul poate activa functia apara() deci cand ataca sau se odihneste OKP devine 1, iar cand apara devine 0
void AparaErou(Erou &Erou,int &OKP)
{
	if (Erou.getSP() >= 1 && OKP == 1)
	{
		Erou.apara();
		Erou.setSP(Erou.getSP() - 1);
		Erou.setDEF(Erou.getDEF() + Erou.Weapon.getDEFI());
		OKP = 0;
	}
	else
	{
		OKP = 1;
		cout << "Nu te poti apara, trebuia sa fii mai atent!";
	}
	cout << "//------------------------------------------------------------//" << endl;
	cout << endl;
	cout << endl;
}
//ODIHNESTE EROU
void OdihnesteErou(Erou &Erou)
{
	Erou.odihneste();
	Erou.setSP(min(Erou.getSPC(), (Erou.getSP() + Erou.getSPR())));
	cout << "//------------------------------------------------------------//" << endl;
	cout << endl;
	cout << endl;
}

//ATAC INAMIC
void AtacInamic(Erou &Erou, int a, Enemy &Inamic)
{
	if (Inamic.atac(a) == 1)
	{
		cout << "HP EROU:" << Erou.getHP() << endl;
		if (Inamic.getATT() > Erou.getDEF())
			Erou.setHP(Erou.getHP() - (2 * Inamic.getATT()+Inamic.Weapon.getATTI()) + Erou.getDEF());
		else
			Erou.setHP(Erou.getHP() - 1);
		cout << "HP EROU DUPA LOVITURA: " << Erou.getHP() << endl;
	}
	cout << "//------------------------------------------------------------//" << endl;
	cout << endl;
	cout << endl;
}

//APARA INAMIC
//OKPI ACELASI ROL CA SI OKP LA EROU
void AparaInamic(Enemy &Inamic, int &OKPI)
{
	if (OKPI == 1)
	{
		Inamic.apara();
		Inamic.setDEF(Inamic.getDEF() + Inamic.Weapon.getDEFI());
		OKPI = 0;
	}
	else
	{
		OKPI = 1;
		cout << "Inamicul a facut o greseala" << endl;
	}
	cout << "//------------------------------------------------------------//" << endl;
	cout << endl;
	cout << endl;
}
int main()
{	
	Loot Portofel;
	//Constructor Erou
	Erou Erou = CreareErou();
	cout << "Name:" << Erou.getName()<<endl;
	ArataStatsE(Erou,1);
	//END constructor erou
	//Constructor inamic
	Enemy Inamic = CreareInamic();
	ArataStatsI(Inamic);
	//END constructor Enemy
	//LUPTA
	int interactiuneE, interactiuneI,interEOK;
	int OKP = 1, OKPI = 1;
	string Bname = "Lucifer";
	Boss Lucifer = Boss(Bname, 100, 20, 20, 5, 5, 5, 5, 6.66, "Zeul Razboiului", "neinfricat, nemiscat, neinvins");
	while (Erou.getHP() > 0 && Inamic.getHP() > 0)
	{
		ArataStatsE(Erou,OKP);
		ArataStatsI(Inamic);
		srand(time(NULL));
		do
		{
			cout << "Acum introdu ce actiune vrei sa faci, 1 e atac, 2 e aparare, 3 te odihnesti" << endl;
			cin >> interactiuneE;
			interEOK = 1;
			switch (interactiuneE)
			{
			case 1:
				cout << "Introdu cat stamina vrei sa consumi." << endl;
				cout << "Nu uita, cu cat folosesti mai multa stamina, cu atat ai sanse mai mari sa lovesti.Max stamina input=10" << endl;
				int att_input;
				cin >> att_input;
				AtacErou(Erou, att_input, Inamic);
				OKP = 1;
				break;
			case 2:
				AparaErou(Erou, OKP);
				break;

			case 3:
				OKP = 1;
				OdihnesteErou(Erou);
				break;
			default:
				interEOK = 0;
				break;
			}
		} while (interEOK == 0);
		if (Inamic.getHP() <= 0)
		{
			break;
		}
		interactiuneI = (rand() % 100 + 1)%5;
		if (interactiuneI == 0)
		{
			AparaInamic(Inamic, OKPI);
		}
		else
		{

			if (interactiuneI >= 1 && interactiuneI <= Inamic.getAGRO())
			{
				switch (Inamic.getLvl())
				{
				case 1:
					AtacInamic(Erou, 3, Inamic);
					OKPI = 1;
					break;
				case 2:
					AtacInamic(Erou, 5, Inamic);
					OKPI = 1;
					break;
				case 3:
					AtacInamic(Erou, 8, Inamic);
					OKPI = 1;
					break;
				default:
					break;
				}
			}
			else
			{
				Inamic.odihneste();
				OKPI = 1;
			}

		
		}
		if (Erou.getHP() <= 0)
			break;
	}

	//CONCLUZII
	if (Erou.getHP() > 0)
	{
		Portofel.Lootdrop(Inamic);
		cout << "//-----------------------------------------------//" << endl;
		cout << " FELICITARI! AI BATUT JOCUL?" << endl;
		cout << "//-----------------------------------------------//" << endl;
		cout << "A aparut " << Lucifer.getName() << "!" << endl;
		cout << "Acest specimen avand o infricosatoare inaltime de " << Lucifer.getInaltime() << "m !" << endl;
		cout << "El este " << Lucifer.getTitlu() << " si sta " << Lucifer.getDescriere() << endl;
		cout << "Vrei sa te lupti cu El ? Apasa 1 pentru a accepta provocarea " << endl;
		int jebaited;
		cin >> jebaited;
		cout << "Cei doi se masoara din priviri si deodata cu viteza si hotarare eroul se arunca spre Lucifer" << endl;
		cout << "Va urma..." << endl;
		cout << "//-----------------------------------------------//" << endl;
	}
	else
	{
		cout << "//-----------------------------------------------//" << endl;
		cout << " YOU DIED!" << endl;
		cout << "//-----------------------------------------------//" << endl;
	}
	
	return 0;
}