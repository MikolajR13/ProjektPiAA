#pragma once
class tablica2
{
	int** tab;
	int x;
	int y;
public:
	tablica2(int x1, int y1);
	~tablica2();
	void fill(int zakres);
	void display();
	void max();
};

