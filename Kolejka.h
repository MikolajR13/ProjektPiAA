#pragma once
class Kolejka
{
public:
	Kolejka();
	~Kolejka();
	int pocz = 0;
	int kon = 0;
	struct element {
		int wartosc;
		element* next=nullptr;
	};
	element* first;
	element* last;
	void dodaj(int x);
	void usun();// ¿e ostatniego czy wybranego?
	void display();
	void usunall();
};

