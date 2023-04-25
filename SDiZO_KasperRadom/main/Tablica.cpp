#include <iostream>
#include "Tablica.h"

using namespace std;


Tablica::Tablica() {     //ustawianie atrybutów tablicy
    Tablica::liczbaElementow = 0;
    Tablica::poczatek = nullptr;
}

Tablica::~Tablica() {   //zwalnianie pamięci po tablicy

    if (poczatek != nullptr) {
        delete[]poczatek;
    }
}


int Tablica::podajDlugosc() { return liczbaElementow; }

//metoda dodająca element na początek tablicy
void Tablica::dodawanieNaPoczatek(int wartosc) {
    int *nowyPoczatek = new int[liczbaElementow + 1];   //ustawianie nowego wskaznika na nowa, wiekszą tablice

    for (int i = 0; i < liczbaElementow; i++) {         //wstawianie elementow starej tablicy
        nowyPoczatek[i + 1] = poczatek[i];              //"i+1" bo indeks 0 nowej tablicy zostawiamy na podana wartosc
    }

    nowyPoczatek[0] = wartosc;                          //dodwanie podanej wartosci na poczatek nowej tablicy
    liczbaElementow++;                                  //inkrementacja zmiennej okreslajacaj dlugosc tablicy
    delete[] poczatek;                                  //zawalnianie miejsca po poprzedniej tablicy
    poczatek = nowyPoczatek;                            //ustawianie wskaznika poczatku starej tablicy na nowa tablice
}


//metoda dodająca element na koniec tablicy
void Tablica::dodawanieNaKoniec(int wartosc) {
    int *nowyPoczatek = new int[liczbaElementow + 1];   //ustawianie nowego wskaznika na nowa, wiekszą tablice

    for (int i = 0; i < liczbaElementow; i++) {         //wstawianie elementow starej tablicy
        nowyPoczatek[i] = poczatek[i];
    }

    nowyPoczatek[liczbaElementow] = wartosc;            //dodwanie podanej wartosci na koniec nowej tablicy
    liczbaElementow++;                                  //inkrementacja zmiennej okreslajacaj dlugosc tablicy
    delete[] poczatek;                                  //zawalnianie miejsca po poprzedniej tablicy
    poczatek = nowyPoczatek;                            //ustawianie wskaznika poczatku starej tablicy na nowa tablice

}


//metoda dodająca element na wybrany indeks tablicy
void Tablica::dodawanieNaIndeks(int indeks, int wartosc) {
    int *nowyPoczatek = new int[liczbaElementow + 1];   //ustawianie nowego wskaznika na nowa, wiekszą tablice
    for (int i = 0; i <
                    indeks; i++) {                  //wstawianie elementow ktore powinny znalezc sie na indeksach mniejszych niz podany
        nowyPoczatek[i] = poczatek[i];
    }
    nowyPoczatek[indeks] = wartosc;                     //dodawanie podanej wartosci na podany indeks
    for (int i = indeks + 1; i < liczbaElementow +
                                 1; i++) {//wstawianie elementow ktore powinny znalezc sie na indeksach wiekszych niz podany
        nowyPoczatek[i] = poczatek[i - 1];
    }
    liczbaElementow++;                                  //inkrementacja zmiennej okreslajacaj dlugosc tablicy
    delete[] poczatek;                                  //zawalnianie miejsca po poprzedniej tablicy
    poczatek = nowyPoczatek;                            //ustawianie wskaznika poczatku starej tablicy na nowa tablice
}


//metoda usuwajaca element z poczatku tablicy
void Tablica::usuwaniePierwszego() {
    int *nowyPoczatek = new int[liczbaElementow - 1];   //ustawianie nowego wskaznika na nowa, wiekszą tablice
    for (int i = 1;
         i < liczbaElementow; i++) {         //wstawianie elementow starej tablicy z pominieciem pierwszego elementu
        nowyPoczatek[i - 1] = poczatek[i];
    }
    liczbaElementow--;                                  //dekrementacja zmiennej okreslajacaj dlugosc tablicy
    delete[] poczatek;                                  //zawalnianie miejsca po poprzedniej tablicy
    poczatek = nowyPoczatek;                            //ustawianie wskaznika poczatku starej tablicy na nowa tablice
}


//metoda usuwajaca element z konca tablicy
void Tablica::usuwanieOstatniego() {
    int *nowyPoczatek = new int[liczbaElementow - 1];   //ustawianie nowego wskaznika na nowa, wiekszą tablice
    for (int i = 0;
         i < liczbaElementow - 1; i++) {     //wstawianie elementow starej tablicy z pominieciem ostatniego elementu
        nowyPoczatek[i] = poczatek[i];
    }
    liczbaElementow--;                                  //dekrementacja zmiennej okreslajacaj dlugosc tablicy
    delete[] poczatek;                                  //zawalnianie miejsca po poprzedniej tablicy
    poczatek = nowyPoczatek;                            //ustawianie wskaznika poczatku starej tablicy na nowa tablice

}


//metoda usuwajaca element o podanym indeksie z tablicy
void Tablica::usuwanieWybranego(int indeks) {
    int *nowyPoczatek = new int[liczbaElementow - 1];   //ustawianie nowego wskaznika na nowa, wiekszą tablice
    for (int i = 0;
         i < indeks; i++) {                  //wstawianie elementow starej tablicy od poczatku do podanego indeksu
        nowyPoczatek[i] = poczatek[i];
    }
    for (int i = indeks + 1;
         i < liczbaElementow; i++) {  //wstawianie elementow starej tablicy od podanego indeksu do konca
        nowyPoczatek[i - 1] = poczatek[i];
    }
    liczbaElementow--;                                  //dekrementacja zmiennej okreslajacaj dlugosc tablicy
    delete[] poczatek;                                  //zawalnianie miejsca po poprzedniej tablicy
    poczatek = nowyPoczatek;                            //ustawianie wskaznika poczatku starej tablicy na nowa tablice

}


//metoda wyszukujaca pierwszy element o podanej wartosci z tablicy i zwracajaca jego indeks,
// jesli elementu niema w tablicy, zwraca -1
int Tablica::wyszukajElement(int wartosc) {
    for (int i = 0;
         i < liczbaElementow; i++) {                 //po kolei sprawdzamy czy i-ty element jest rowny podanej wartosci
        if (poczatek[i] == wartosc)return i;
    }
    return -1;                                          //jesli elementu niema w tablicy zwraca -1
}


//metoda drujukujaca kolejne elementy tablicy w formacie [i]{T[i]}
void Tablica::wydrukujTablice() {
    for (int i = 0; i < liczbaElementow; i++) {
        cout << "[" << i << "]" << poczatek[i] << endl;
    }
}


int Tablica::podajWartosc(int indeks) {
    return poczatek[indeks];
}
