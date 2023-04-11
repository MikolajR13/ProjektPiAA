#include "Kolejka.h"
#include<iostream>
Kolejka::Kolejka() {
	first = nullptr;
	last = nullptr;
}
Kolejka::~Kolejka() {
	if (first==nullptr)
	{
	}
	else
	{
		element* nowy = new element;
		while (first!=nullptr)
		{
			nowy = first;
			first = first->next;
			delete nowy;
		}
		
	}
}
void Kolejka::dodaj(int x) 
{
	
	
	if (first == nullptr)
	{
		last = new element;
		last->wartosc = x;
		first = last;
		first->next = nullptr;
	}
	else
	{
		element* temp = new element;
		temp->wartosc = x;
		last->next = temp;
		last = temp;
		
	}
}
void Kolejka::usun()
{
	if (first == nullptr)
	{
		std::cout << "Kolejka jest juz pusta" << std::endl;
	}
	else
	{
		element* temp = first->next;
		delete first;
		first = temp;
	}
}
void Kolejka::display()
{
	element* temp = first;
	if (temp == nullptr)
	{
		std::cout<<"Kolejka jest pusta"<<std::endl;
		return;
	}
	else
	{
		while (temp!=nullptr)
		{
			std::cout<<temp->wartosc << std::endl;
			temp = temp->next;
		}
	}
	
}
void Kolejka::usunall()
{
	if (first == nullptr)
	{
		return;
	}
	else
	{
		element* nowy = new element;
		while (first != nullptr)
		{
			nowy = first;
			first = first->next;
			delete nowy;
		}
		
	}
}