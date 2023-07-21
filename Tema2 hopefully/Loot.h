#pragma once
#include <time.h>
#include "Instanta.h"
class Loot
{
	friend class Enemy;
public:
	int coins;
	void Lootdrop(Enemy X)
	{
		coins = rand() % 100;
		cout << "Portofelul a avut " << coins << " lei" << endl;
	}
};

