#pragma once
#include<iostream>
class Tablica1
{
	int* arr;
public:
	Tablica1();
	~Tablica1();
	void savetofile(std::string name);
	void loadfromfile(std::string name);
	void loadfrombinary(std::string binaryname);
	void savetobinary(std::string binaryname);
	long filesize();
	long size;
	std::string textfile;
	std::string binfile;
	
	
};

