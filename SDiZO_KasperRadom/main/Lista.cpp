
#include <iostream>
#include "Lista.h"

using namespace std;

//konstruktor listy
Lista::Lista() {
    Lista::poczatek = nullptr;
    Lista::aktualnyElement = nullptr;
    Lista::koniec = nullptr;
    Lista::liczbaElementow = 0;
}

//destruktor listy
Lista::~Lista() {
    for (int i = 0; i < liczbaElementow; i++) {
        //przechodzimy na kolejny element listy
        aktualnyElement = poczatek;
        //zapisujemy kolejny element
        poczatek = aktualnyElement->kolejnyElement;
        //zwalniamy pamiec zajmowana przez poprzedni element
        delete aktualnyElement;
    }//powtarzamy petle tyle razy ile jest elementow w liscie
}

void Lista::dodawanieNaPoczatek(int wartosc) {
    //tworzenie nowego elementu listy i przypisywanie wartosci
    aktualnyElement = new ElementListy(poczatek, wartosc, nullptr);
    poczatek = aktualnyElement;   //ustawianie nowego pierwszego poczatku listy
    if (liczbaElementow == 0) {           //ustawianie konca listy jesli ten nie zostal wczesniej przypisany
        koniec = poczatek;
    } else {
        poczatek->kolejnyElement->poprzedniElement = poczatek;//ustawianie wskaznika na poprzedni element dla drugiego elementu
    }
    liczbaElementow++;          //inkrementacja dlugosci listy
}


void Lista::dodawanieNaKoniec(int wartosc) {
    //tworzenie nowego elementu listy
    aktualnyElement = new ElementListy(nullptr, wartosc, koniec);
    if (liczbaElementow != 0) {                        //jesli lista nie jest pustato:
        koniec->kolejnyElement = aktualnyElement;   //przypisz nowy "kolejny element" bylemu ostatniemu elementowi
        aktualnyElement->poprzedniElement = koniec;   //przypisz nowy "poprzedni element" ostatniemu elementowi
    } else {                                          //w przeciwnym razie ustaw poczatek na stworzony element
        poczatek = aktualnyElement;
    }
    koniec = aktualnyElement;                         //ustaw nowy koniec listy
    liczbaElementow++;                              //inkrementacja dlugosci listy
}


void Lista::dodawanieNaIndeks(int indeks, int wartosc) {
    //jesli indeks jest rowny zero to dodajemy na poczatek listy
    if (indeks == 0) {
        dodawanieNaPoczatek(wartosc);
        return;
    }
    //jesli indeks jest rowny dlugosci listy to dodajemy na koniec listy
    if (indeks == liczbaElementow) {
        dodawanieNaKoniec(wartosc);
        return;
    }
    aktualnyElement = poczatek;       //przechodzenie na poczatek listy
    for (int i = 1;
         i < indeks; i++) {      //przechodzenie z elementu do elementu po kolei az dojdziemy do indeksu [indeks-1]
        aktualnyElement = aktualnyElement->kolejnyElement;
    }
    //tworzenie nowego elementu listy wskazanego przez uzytkownika
    ElementListy *nowyElementListy = new ElementListy(aktualnyElement->kolejnyElement, wartosc, aktualnyElement);

    //ustawianie wskaznika "kolejny" elementu [indeks-1] na nowoutworzony element
    aktualnyElement->kolejnyElement = nowyElementListy;
    //ustawianie wskaznika "poprzedni" elementu [indeks-1] na nowoutworzony element
    nowyElementListy->kolejnyElement->poprzedniElement = nowyElementListy;
    liczbaElementow++;  //inkrementacja liczby elementow
}


void Lista::usuwaniePierwszego() {
    if (liczbaElementow == 1) {
        poczatek = nullptr;
        koniec = nullptr;
        liczbaElementow--;
        return;
    }
    //wskaznik aktualnego elementu listy ustawiamy na drugi element listy
    aktualnyElement = poczatek->kolejnyElement;
    //usuwamy wskaznik na poczatek
    delete poczatek;
//    przypisujemy aktualny element do poczatku listy
    poczatek = aktualnyElement;
    //wskaznik na poprzednni element pierwszego elementu listy ustawiamy na nullptr
    poczatek->poprzedniElement = nullptr;
    liczbaElementow--;      //dekrementacja dlugosci listy;

}

void Lista::usuwanieOstatniego() {
    if (liczbaElementow > 1) {  //jesli w liscie jest wiecej niz jeden element:
        //wskaznik konca listy ustawiamy na przedostatni element listy
        koniec = koniec->poprzedniElement;
        //zwalnianie pamieci ostatniego elementu tablicy
        delete koniec->kolejnyElement;
        //wskaznik na kolejny element ostatniego elementu listy ustawiamy na nullptr
        koniec->kolejnyElement = nullptr;
    } else {                  // w przeciwnym wypadku
        delete koniec;      //zwolnienie pamiec jedynego elementu listy
        koniec = nullptr;    //przypisanie nullptr do poczatku i konca
        poczatek = nullptr;

    }
    liczbaElementow--;      //dekrementacja dlugosci listy;
}

void Lista::usuwanieWybranego(int indeks) {
    //jesli indeks jest rowny zero to dodajemy na poczatek listy
    if (indeks == 0) {
        usuwaniePierwszego();
        return;
    }
    //jesli indeks jest rowny dlugosci listy to dodajemy na koniec listy
    if (indeks == liczbaElementow - 1) {
        usuwanieOstatniego();
        return;
    }


    aktualnyElement = poczatek;       //przechodzenie na poczatek listy
    for (int i = 1;
         i < indeks; i++) {      //przechodzenie z elementu do elementu po kolei az dojdziemy do indeksu [indeks-1]
        aktualnyElement = aktualnyElement->kolejnyElement;
    }
    ElementListy *elementDoUsuniecia = aktualnyElement->kolejnyElement; //zapisywanie elementu do usuniecia w nowym wskazniku
    aktualnyElement->kolejnyElement = elementDoUsuniecia->kolejnyElement; //polaczenie adresow konca i poczatku elementu [indeks-1]...
    elementDoUsuniecia->kolejnyElement->poprzedniElement = aktualnyElement;//...  z elementem [indeks+1]
    delete elementDoUsuniecia;
    liczbaElementow--;  //dekrementacja liczny elementow
}

int Lista::wyszukajElement(int wartosc) {
    aktualnyElement = poczatek;                   //przypisujemy wskaznik na poczatek listy do aktualnego elementu
    for (int i = 0; i < liczbaElementow; i++) {         //przechodzimy przez wszystkie elementy listy
        if (aktualnyElement->wartosc ==
            wartosc) {  //jesli warwosc elementu jest rowna szukanej wartosci zwracamy jego indeks
            return i;
        } else {                                  //jesli nie znalezlismy wartosci wczytujemy kolejny element listy
            aktualnyElement = aktualnyElement->kolejnyElement;
        }
    }
    return -1;                                  // jesli po przejsciu przez cala liste nie znalezlismy szukanej wartosci zwracamy -1
}

void Lista::wydrukujListe() {
    aktualnyElement = poczatek;                   //przypisujemy wskaznik na poczatek listy do aktualnego elementu
    for (int i = 0; i <
                    liczbaElementow; i++) {         //przechodzimy przez cala liste i wyswietlamy elementy w formacie [indeks]wartosc
        cout << "[" << i << "]" << aktualnyElement->wartosc << endl;
        aktualnyElement = aktualnyElement->kolejnyElement;
    }

}

int Lista::podajDlugosc() { return liczbaElementow; }

