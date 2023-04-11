#include "Lista.h"
#include<iostream>
Lista::Lista() {
	head = nullptr;
	tail = nullptr;
}
Lista::~Lista() {
	list* temp = head;
	while (temp != tail)
	{
		head = temp->nastepny;
		delete temp;
		temp = head;

	}
	delete tail;
}
void Lista::dodaj(int x)
{
	if (head != nullptr)
	{
		list* temp = new list(x);
		tail->nastepny = temp;
		tail = temp;
	}
	else
	{
		head=new list(x);
		tail = head;
	}
}
void Lista::usun(int numer)
{
	list* temp = head;
	list* poprzedni = nullptr;
	for (int i = 0; i < numer; i++)
	{
		if (temp != nullptr)
		{
			poprzedni = temp;
			temp = temp->nastepny;
		}
		else
		{
		std::cout << "nie ma tylu elementow na liscie" << std::endl;
		return;
		}
		
	}
		poprzedni->nastepny = temp->nastepny;//zmieniam wskaünik poprzedniego na temp po czym usuwam temp xd trzeba w innej kolejnoúci 
		delete temp;
}
void Lista::wyswietl()
{
	list* temp = head;
	while (temp != nullptr)
	{
		std::cout<<temp->wartosc<<std::endl;
		temp = temp->nastepny;
	}
}
void Lista::usunwszystko()
{
	list*temp = head;
	while (temp != tail)
	{
		head = temp->nastepny;
		delete temp;
		temp = head;
	}
	delete tail;
	head = nullptr;
	tail = nullptr;
}