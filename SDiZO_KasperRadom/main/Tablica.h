

#ifndef SDIZO_KASPERRADOM_TABLICA_H
#define SDIZO_KASPERRADOM_TABLICA_H


class Tablica {
private:
    //wakaznik na head
    int *poczatek;
    //dlugosc tablicy / liczba elementow
    int liczbaElementow;


public:
    //ustawianie atrybutów tablicy
    Tablica();

    //zwalnianie pamięci po tablicy
    ~Tablica();


    //metoda dodająca element na początek tablicy
    void dodawanieNaPoczatek(int wartosc);

    //metoda dodająca element na koniec tablicy
    void dodawanieNaKoniec(int wartosc);

    //metoda dodająca element na wybrany indeks tablicy
    void dodawanieNaIndeks(int indeks, int wartosc);

    //metoda usuwajaca element z konca tablicy
    void usuwaniePierwszego();

    //metoda usuwajaca element o podanym indeksie z tablicy
    void usuwanieOstatniego();

    //metoda wyszukujaca pierwszy element o podanej wartosci z tablicy i zwracajaca jego indeks,
    // jesli elementu niema w tablicy, zwraca -1
    void usuwanieWybranego(int indeks);

    //metoda drujukujaca kolejne elementy tablicy w formacie [i]{T[i]}
    int wyszukajElement(int wartosc);

    //metoda usuwajaca element z poczatku tablicy
    void wydrukujTablice();

    //zwraca dlugosc tablicy
    int podajDlugosc();
    //wczytywanie tablicy z listy
    void wczytywanieTablicy();

};


#endif //SDIZO_KASPERRADOM_TABLICA_H
