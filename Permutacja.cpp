#include "Permutacja.h"
#include<iostream>
#include<string>
#include <functional>
Permutacja::Permutacja(std::string pp):p(pp) {
	int liczba = silnia(p.length());
	arr = new std::string[liczba];
}
Permutacja::~Permutacja() {
delete[] arr;
licznik = 0;
}

bool Permutacja::czy_palindrom(std::string p,int x, int y)
{
	if (p[x] != p[y])
		return false;
	if (x >= y)
		return true;
	return czy_palindrom(p, x + 1, y - 1);

}
void Permutacja::perm(std::string p,int pos)
{
	if (p.length() == pos)
	{
		
			arr[licznik] = p;
			licznik++;
	}
	else
	{
		for (int i = pos; i < p.length(); i++)
		{
			std::swap(p[i], p[pos]);   
			perm(p, pos + 1);
			std::swap(p[i], p[pos]);

		}
	}
}

int Permutacja::silnia(int z)
{
	if (z == 1)
	{
		return 1;
	}
	return silnia(z - 1) * z;
}
void Permutacja::main(std::string p)
{
	perm(p, 0);
}
void Permutacja::duplikat()
{
	for (int i = 0; i < licznik; i++)
	{
		if (czy_palindrom(arr[i], 0, arr[i].length() - 1)&&arr[i]!="0")
		{
			for (int j = i + 1; j < licznik ; j++) 
			{
				if (arr[i] == arr[j] )
				{
					arr[j] = "0";
				}
			}
		}
		else {
			arr[i] = "0";
		}
	}
	int temp = 0;
	for (int i = 0; i < licznik - 1; i++)
	{
		for (int j = 1; j < licznik -i; j++)
		{
			if (arr[j - 1] < arr[j])
			{
				std::swap(arr[j - 1], arr[j]);
			}
		}
	}
	while (arr[temp] != "0")
	{
		std::cout<<arr[temp]<<std::endl;
		temp++;
	}
}