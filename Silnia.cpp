#include "Silnia.h"
#include<iostream>

Silnia::Silnia() {}
Silnia::~Silnia() {}

int Silnia::potega(int x, int y)
{
	if (y == 1)
	{
		return x;
	}
	int wynik = potega(x, y - 1);
	return wynik * x;
	
}
int Silnia::sil(int z)
{
	if (z == 1)
	{
		return 1;
	}
	return sil(z - 1) * z;
}