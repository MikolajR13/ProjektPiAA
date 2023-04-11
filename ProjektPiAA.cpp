#include <iostream>
#include<time.h>
#include<string>
#include "tablica2.h"
#include "Tablica1.h"
#include "Silnia.h"
#include "Palindrom.h"
#include "Permutacja.h"
#include "Lista.h"
#include "Kolejka.h"

int menu()
{
    std::cout << "WITAJ W MENU" << std::endl;
    int x;
    std::cout << "WYBIERZ CO CHCESZ ZROBIC"<< std::endl;
    std::cout << "1. Uruchom program: Tablica dwuwymiarowa alokowana dynamicznie"<< std::endl;
    std::cout << "2. Uruchom program: Tablica jednowymiarowa"<< std::endl;
    std::cout << "3. Uruchom program: Matematyczne funkcje rekurencyjne" << std::endl;
    std::cout << "4. Uruchom program: Palindrom -  funkcje rekurencyjne" << std::endl;
    std::cout << "5. Uruchom program: Permutacje -  funkcje rekurencyjne" << std::endl;
    std::cout << "6. Uruchom program: Lista Jednokiekrunkowa" << std::endl;
    std::cout << "7. Uruchom program: Kolejka" << std::endl;
    std::cout << "8. Kolejka deque" << std::endl;
    std::cout << " 0. Wyjdz z programu" << std::endl;
    std::cin >> x;
    return x;
}
void menu1()
{
    
    std::cout << "podaj x oraz y tablicy" << std::endl;
        int x;
        int y;
        int a=1;
        std::cin >> x;
        std::cin >> y;
        tablica2 tablica(x, y);
        while (a>0)
        {
            std::cout << "WYBIERZ CO CHCESZ ZROBIC W ZADANIU 'TABLICA DWUWYMIAROWA ALOKOWANA DYNAMICZNIE'" << std::endl;
            std::cout <<"1. Wypełnij tablice losowymi liczbami z zakresu 1 - N " << std::endl;
            std::cout << "2. Wyswietl tablice " << std::endl;
            std::cout << "3. Znajdz najwieszka liczbe w tablicy" << std::endl;
            std::cout << "0. Wyjdz do menu glownego " << std::endl;
    
            std::cin >> a;
            switch (a) {
            case 1:
                std::cout << "podaj gorny zakres" << std::endl;
                int zakres;
                std::cin >> zakres;
                tablica.fill(zakres);
                break;
        
            case 2:
                tablica.display();
                break;
            case 3:
                tablica.max();
                break;
            case 0:
                 break;
             default:
                std::cout << "wybierz poprawna opcje" << std::endl;
    }
        }
    


    
    
    
    
}
void menu2()
{
    Tablica1 tablica;
    int a = 1;
    while (a > 0)
    {
        std::cout << "WYBIERZ CO CHCESZ ZROBIC W ZADANIU 'Tablica jednowymiarowa'" << std::endl;
        std::cout << "1. Wczytaj z pliku tekstowego " << std::endl;
        std::cout << "2. Wczytaj z pliku binarnego " << std::endl;
        std::cout << "3. Zapisz do  pliku tekstowego " << std::endl;
        std::cout << "4. Zapisz do  pliku binarnego " << std::endl;
        std::cout << "0. Wyjdz do menu glownego " << std::endl;


        std::cin >> a;
        switch (a) {
        case 1:
            tablica.loadfromfile(tablica.textfile);
            break;
        case 2:
            tablica.loadfrombinary(tablica.binfile);
            break;
        case 3:
            tablica.savetofile(tablica.textfile);
            break;
        case 4:
            tablica.savetobinary(tablica.binfile);
            break;
        case 0:
            break;
        default:
            std::cout << "wybierz poprawna opcje" << std::endl;
        }

    }
    
}
void menu3()
{
    Silnia silnia;
    
    int a = 1;
    while (a > 0)
    {
        std::cout << "WYBIERZ CO CHCESZ ZROBIC W ZADANIU 'Silnia i potega rekurencyjnie'" << std::endl;
        std::cout << "1. Policz potege " << std::endl;
        std::cout << "2. Policz silnie " << std::endl;
        std::cout << "0. Wyjdz do menu glownego " << std::endl;
        

        std::cin >> a;
        if (a == 1)
        {
            std::cout << "Podaj liczbe ktora bedziesz potegowal" << std::endl;
            int x;
            std::cin >> x;
            std::cout << "Podaj potege" << std::endl;
            int b;
            std::cin >> b;
            int w = silnia.potega(x, b);
            std::cout << w << std::endl;
        }
        else
        {
            if (a == 2)
            {
            std::cout << "Podaj liczbe ktorej chcesz poznac silnie" << std::endl;
            int q;
            std::cin >> q;
            int y = silnia.sil(q);
            std::cout << y << std::endl;
            }
            else
            {
                if (a == 0)
                {
                }
                else
                {
                    std::cout << "wybierz poprawna opcje" << std::endl;
                }
            }
        }
            
        }
    }
   
    
   

void menu4()
{
    Palindrom palindrom;
    int a = 1;
    while (a > 0)
    {
        std::cout << "WYBIERZ CO CHCESZ ZROBIC W ZADANIU 'Palindrom rekurencyjnie'" << std::endl;
        std::cout << "1. Sprawdz czy ciag jest palindromem " << std::endl;
        std::cout << "0. Wyjdz do menu glownego " << std::endl;


        std::cin >> a;
        switch (a) {
        case 1:
            palindrom.pal();
            break;
        case 0:
            break;
        default:
            std::cout << "wybierz poprawna opcje" << std::endl;
        }
    }
    
}
void menu5()
{
    std::string ciag;
    std::cout << "podaj ciag ktorego chcesz poznac permutacje" << std::endl;
    std::cin >> ciag;
    Permutacja permutacja(ciag);
    int a = 1;
    while (a > 0)
    {
        std::cout << "WYBIERZ CO CHCESZ ZROBIC W ZADANIU 'Permutacja rekurencyjnie'" << std::endl;
        std::cout << "1. Wypisz wszystkie permutacje ktore sa palindromami podanego ciagu " << std::endl;
        std::cout << "0. Wyjdz do menu glownego " << std::endl;
        std::cin >> a;
        switch (a) {
        case 1:
            permutacja.main(ciag);
            permutacja.duplikat();
            break;
        case 0:
            break;
        default:
            std::cout << "wybierz poprawna opcje" << std::endl;
        }
    }
    
}
void menu6()
{

    Lista lista;
    int a = 1;
    while (a > 0)
    {
        std::cout << "WYBIERZ CO CHCESZ ZROBIC W ZADANIU 'Lista jednokierunkowa'" << std::endl;
        std::cout << "1. Dodaj element do list " << std::endl;
        std::cout << "2. Usun wybrany element z listy " << std::endl;
        std::cout << "3. Wyswietl cala liste" << std::endl;
        std::cout << "4. Usun cala liste" << std::endl;
        std::cout << "0. Wyjdz do menu glownego " << std::endl;
        std::cin >> a;
        switch (a) {
        case 1:
            std::cout << "Podaj element (int) ktory chcesz dodac do listy" << std::endl;
            int x;
            std::cin >> x;
            lista.dodaj(x);
            break;
        case 2:
            std::cout << "Podaj  numer elementu ktory chcesz usunac z listy" << std::endl;
            int b;
            std::cin >> b;
            lista.usun(b);
            break;
        case 3:
            lista.wyswietl();
            break;
        case 4:
            lista.usunwszystko();
            break;
        case 0:
            break;
        default:
            std::cout << "wybierz poprawna opcje" << std::endl;
        }
    }
}
void menu7()
{
    Kolejka kolejka;
    int a = 1;
    while (a > 0)
    {
        std::cout << "WYBIERZ CO CHCESZ ZROBIC W ZADANIU 'Kolejka'" << std::endl;
        std::cout << "1. Dodaj element do Kolejki " << std::endl;
        std::cout << "2. Usun ostatni element z kolejki " << std::endl;
        std::cout << "3. Wyswietl cala kolejke" << std::endl;
        std::cout << "4. Usun cala kolejke" << std::endl;
        std::cout << "0. Wyjdz do menu glownego " << std::endl;
        std::cin >> a;
        switch (a) {
        case 1:
            std::cout << "Podaj element (int) ktory chcesz dodac do kolejki" << std::endl;
            int x;
            std::cin >> x;
            kolejka.dodaj(x);
            break;
        case 2:
            kolejka.usun();
            break;
        case 3:
            kolejka.display();
            break;
        case 4:
            kolejka.usunall();
            break;
        case 0:
            break;
        default:
            std::cout << "wybierz poprawna opcje" << std::endl;
        }
    }
}





int main()
{
    int a = 1;
    while (a > 0)
    {
        a = menu();
        switch (a)
        {
        case 1:
            menu1();
            break;
        case 2:
            menu2();
            break;
        case 3:
            menu3();
            break;
        case 4:
            menu4();
            break;
        case 5:
            menu5();
            break;
        case 6:
            menu6();
            break;
        case 7:
            menu7();
            break;
        case 0:
            break;
        default:
            std::cout << "wybierz poprawny numer" << std::endl;
        }
    }
    return 0;
}

