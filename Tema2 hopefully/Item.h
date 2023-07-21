#pragma once
#include <iostream>
using namespace std;
class Item
{
private:
	int ATTI;
	int DEFI;
	int SPI;
public:
	void setATTI(int a)
	{
		ATTI = a;
	}
	void setDEFI(int a)
	{
		DEFI = a;
	}
	void setSPI(int a)
	{
		SPI = a;
	}
	int getSPI()
	{
		return SPI;
	}
	int getATTI()
	{
		return ATTI;
	}
	int getDEFI()
	{
		return DEFI;
	}
	Item():ATTI{0},DEFI{0},SPI{0}
	{
		cout << "Acesta este un item inutil"<<endl;
	}
	Item(int x, int y,int z) : ATTI{ x }, DEFI{ y },SPI{z}
	{
		cout << "Acesta este un item util" << endl;
	}
	~Item()
	{
		cout << "S-a rupt itemul" << endl;
	}
};

