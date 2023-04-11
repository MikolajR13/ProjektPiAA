#include "tablica2.h"
#include <time.h>
#include<iostream>
#include<stdlib.h>
tablica2::tablica2(int x1, int y1):x(x1),y(y1)
{
    tab = new int* [y];
	for (int i = 0; i < y; i++)
	{
		tab[i] = new int[x];
	}
}
tablica2::~tablica2()
{
	for (int i = 0; i < y; i++)
	{
		delete [] tab[i];
	}
	delete [] tab;
}

void tablica2::fill(int zakres)
{
	srand(time(NULL));
	for (int i = 0; i < y; i++)
	{
		for (int k = 0; k < x; k++)
		{
			int randa = rand() % zakres+1;
			tab[i][k] = randa;
		}
	}
}
void tablica2::display()
{
	for (int i = 0; i < y; i++)
	{
		for (int k = 0; k < x; k++)
		{
			std:: cout << tab[i][k] << " ";
		}
		std::cout << std::endl;
	}
}
void tablica2::max()
{
	int max = 0;
	for (int i = 0; i < y; i++)
	{
		for (int k = 0; k < x; k++)
		{
			if (tab[i][k] > max)
			{
				max = tab[i][k];
			}
		}
		
	}
	std::cout << "najwieksza liczba w tablicy to: " << max << std::endl;
}