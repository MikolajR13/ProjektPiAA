#pragma once
#include<iostream>
class Lista
{
	struct list
	{
		int wartosc;
		list* nastepny;
		list(int w)
		{
			wartosc = w;
			nastepny = nullptr;
		}
	};
	list* head;
	list* tail;
public:
		Lista();
		~Lista();

		void dodaj(int x);
		void usun(int numer);
		void wyswietl();
		void usunwszystko();


	
};

