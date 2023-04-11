#include "Tablica1.h"
#include<iostream>
#include <sys/stat.h>
#include<fstream>
#include<filesystem>
#include<string>
Tablica1::Tablica1()
{
	long a = filesize();
	arr = new int[a];
}
Tablica1::~Tablica1()
{
}
long Tablica1::filesize()
{
	std::cout << "podaj sciezke do pliku tekstowego " << std::endl;
	
	char* filename;
	filename = new char[100];
	char* filename1;
	filename1 = new char[100];
	std::cin >> filename;
	textfile = filename;
	std::cout << "podaj sciezke do pliku binarnego" << std::endl;
	std::cin >> filename1;
	binfile = filename1;
	std::ifstream infile(filename, std::ifstream::ate | std::ifstream::binary);
	std::ifstream infile1(filename1, std::ifstream::ate | std::ifstream::binary);
	long a = infile1.tellg();
	long b=infile.tellg();
	b = b / sizeof(int);
	a = a / sizeof(int);
	infile.close();
	std::cout << a << std::endl << b;
	infile1.close();
	if (a >= b)
	{
		size = a;
		return a;
	}
	else
	{
		size = b;
		return b;
	}
}
void Tablica1::loadfromfile(std::string filename)
{
	std::ifstream fin(filename);
	
	if (fin)
	{
			int number;
			int count = 0;
			while(fin>>number)
			{
				arr[count] = number;
				std::cout << arr[count] << std::endl;
				count++;
			}
			std::cout << std::endl;
	}
	else
	{
		std::cout << "error loading from file " << filename << std::endl;
	}
	fin.close();
}
void Tablica1::loadfrombinary(std::string binar)
{
	std::ifstream fin(binar, std::ios::in | std::ios::binary);
	if (!fin.is_open())
		return;
	fin.read(reinterpret_cast<char*>(arr), sizeof(int) * size);
	fin.close();

	
}
void Tablica1::savetobinary(std::string binar)
{
	std::ofstream fout("100.bin", std::ios::out | std::ios::binary);
	if (!fout.is_open())
		return;
	fout.write(reinterpret_cast<char*>(arr), sizeof(int) * size);
	fout.close();
	

}
	


void Tablica1::savetofile(std::string filename)
{
	
	std::ofstream fout(filename);
	if (!fout.is_open()) {
		std::cout << "Error z wczytywaniem pliku binarnego";
		return;
	}
	else {
		for (int i = 0; i < size; i++)
		{
			fout << arr[i] << " ";
		}
	}
	fout.close();
}