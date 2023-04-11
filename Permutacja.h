#pragma once
#include<iostream>
class Permutacja
{
	std::string *arr;
	std::string p;
	int licznik = 0;
public:
	
	Permutacja(std::string p);
	~Permutacja();
	bool czy_palindrom(std::string p, int x, int y);
	void perm(std::string p, int pos);
	void main(std::string p);
	int silnia(int z);
	void duplikat();

};

