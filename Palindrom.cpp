#include "Palindrom.h"
Palindrom::Palindrom(){}
Palindrom::~Palindrom(){}
bool Palindrom::czy_palindrom(std::string p,int x, int y)
{
	
	if (p[x] != p[y])
		return false;
	if (x >= y)
		return true;
	return czy_palindrom(p, x+1, y-1);
	
}
void Palindrom::pal()
{
	std::string palindrom;
	std::cout<<"Wpisz slowo ktore chcesz sprawdzic"<<std::endl;
	std::cin >> palindrom;
	std::cout << std::endl;
	int x = 0;
	bool ret = true;
	int y = palindrom.length() - 1;
	if (czy_palindrom(palindrom, x, y))
	{
		std::cout << "Slowo: " << palindrom << " jest palindromem" << std::endl;

	}
	else
	{
		std::cout << "Slowo: " << palindrom << " nie jest palindromem" << std::endl;
	}

}