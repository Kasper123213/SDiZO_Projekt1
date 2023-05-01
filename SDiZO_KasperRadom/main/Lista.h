
#ifndef SDIZO_KASPERRADOM_LISTA_H
#define SDIZO_KASPERRADOM_LISTA_H


#include "ElementListy.h"

class Lista {

private:
    //wskaznik na pierwszy element listy
    ElementListy *poczatek;
    //wskaznik na aktualnie przegladany element listy
    ElementListy *aktualnyElement;
    //wskaznik na ostatni element listy
    ElementListy *koniec;
    //zmienna przechowujaca ilosc elementow w liscie
    int liczbaElementow;

public:
    //konstruktor klasy
    Lista();

    //destruktor klasy, zwalnia wskazywane przez zmienne miejsca w pamieci
    ~Lista();

    //metoda dodaje wskazana wartosc na poczatek listy
    void dodawanieNaPoczatek(int wartosc);

    //metoda dodaje wskazana wartosc na koniec listy
    void dodawanieNaKoniec(int wartosc);

    //metoda dodaje wskazana wartosc na wskazany indeks listy
    void dodawanieNaIndeks(int indeks, int wartosc);

    //metoda usuwa pierwszy element listy
    void usuwaniePierwszego();

    //metoda usuwa ostatni element listy
    void usuwanieOstatniego();

    //metoda usuwa element listy o wskazanym indeksie
    void usuwanieWybranego(int indeks);

    //metoda wyszukije w liscie pierwsze wystapienie podanej wartosci i zwraca jej indeks
    int wyszukajElement(int wartosc);

    //metoda wyswietla tablice w konsoli
    void wydrukujListe();

    //metoda zwraca dlugosc listy
    int podajDlugosc();

};


#endif //SDIZO_KASPERRADOM_LISTA_H
