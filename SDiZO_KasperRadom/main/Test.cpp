//
// Created by radom on 24.03.2023.
//

#include <iostream>
#include "Test.h"
#include "Tablica.h"
#include "Lista.h"
#include "KopiecBinarny.h"
#include "Czas.h"

using namespace std;

Test::Test() {
    Czas czas;
}

//metoda testujaca tablice
void Test::testTablicy() {
    Tablica tablica;
    int wybor;

    do {
        cout << "Wybierz funkcję tablicy:" << endl;
        cout << "    1. Dodaj na początek" << endl;
        cout << "    2. Dodaj na koniec" << endl;
        cout << "    3. Dodaj na wybrany indeks" << endl;
        cout << "    4. Usuń pierwszy" << endl;
        cout << "    5. Usuń ostatni" << endl;
        cout << "    6. Usuń wybrany indeks" << endl;
        cout << "    7. Wyszukaj element" << endl;
        cout << "    8. Wydrukuj tablicę" << endl;
        cout << "    0. Wyjście" << endl;
        cout << "Wybór: ";
        cin >> wybor;
        cout << "\n";
        switch (wybor) {



//wyjscie
            case 0:
                return;



//Dodawanie na początek tablicy
            case 1:
                int wartosc;
                cout << "Podaj wartość: ";
                cin >> wartosc;

                czas.czasStart();
                tablica.dodawanieNaPoczatek(wartosc);
                czas.czasStop();

                cout << "Dodano poprawnie. Czas wykonania: " << czas.czasWykonania() << endl;
                break;






//Dodawanie na koniec tablicy
            case 2:
                cout << "Podaj wartość: ";
                cin >> wartosc;

                czas.czasStart();
                tablica.dodawanieNaKoniec(wartosc);
                czas.czasStop();

                cout << "Dodano poprawnie. Czas wykonania: " << czas.czasWykonania() << endl;
                break;





//Dodawanie na wybrany indeks tablicy
            case 3:
                int indeks;
                cout << "Podaj wartość: ";
                cin >> wartosc;
                cout << "Podaj indeks: ";
                cin >> indeks;
                if (indeks > tablica.podajDlugosc() || indeks < 0) { //sprawdzanie czyjest sens dodania tego elemmentu
                    cout << "Niepoprawny indeks" << endl;//na początek, koniec lub gdzieś w środek
                } else {

                    czas.czasStart();
                    tablica.dodawanieNaIndeks(indeks, wartosc);
                    czas.czasStop();
                    cout << "Dodano poprawnie. Czas wykonania: " << czas.czasWykonania() << endl;
                }
                break;




//usuwanie elementu z przodu
            case 4:
                if (tablica.podajDlugosc() == 0) {//sprawdzanie czy tablica nie jest pusta
                    cout << "Tablica pusta, nie można mic już z niej usunąć" << endl;
                } else {
                    czas.czasStart();
                    tablica.usuwaniePierwszego();
                    czas.czasStop();
                    cout << "Usunięto poprawnie. Czas wykonania: " << czas.czasWykonania() << endl;
                }
                break;






//usuwanie elementu z końca
            case 5:
                if (tablica.podajDlugosc() == 0) { //sprawdzanie czy tablica nie jest pusta
                    cout << "Tablica pusta, nie można mic już z niej usunąć" << endl;
                } else {

                    czas.czasStart();
                    tablica.usuwanieOstatniego();
                    czas.czasStop();
                    cout << "Usunięto poprawnie. Czas wykonania: " << czas.czasWykonania() << endl;
                }
                break;



//usuwanie elementu o podanym indeksie
            case 6:
                if (tablica.podajDlugosc() == 0) { //sprawdzanie czy tablica nie jest pusta
                    cout << "Tablica pusta, nie można mic już z niej usunąć" << endl;
                    break;
                }

                cout << "Podaj indeks: ";
                cin >> indeks;

                if (indeks >= tablica.podajDlugosc() ||
                    indeks < 0) {//sprawdzanie czy na podanym indeksie znajduje się jakaś wartość
                    cout << "Niepoprawny indeks" << endl;
                } else {
                    czas.czasStart();
                    tablica.usuwanieWybranego(indeks);
                    czas.czasStop();
                    cout << "Usunięto poprawnie. Czas wykonania: " << czas.czasWykonania() << endl;
                }
                break;




//wyszukiwanie elementu
            case 7:
                if (tablica.podajDlugosc() == 0) { //sprawdzanie czy tablica jest pusta
                    cout << "Tablica pusta" << endl;
                    break;
                }

                cout << "Podaj wartość elementu do wyszukania: ";
                cin >> wartosc;

                czas.czasStart();
                indeks = tablica.wyszukajElement(wartosc);      //zwraca -1 jesli elementu niema w tablicy
                czas.czasStop();
                if (indeks < 0) {
                    cout << "W tablicy niema danego elementu. Czas wykonania: " << czas.czasWykonania() << endl;
                } else {
                    cout << "Wartość występuje na indeksie: " << indeks << " Czas wykonania: " << czas.czasWykonania()
                         << endl;
                }
                break;



//wyświetlanie tablicy
            case 8:
                if (tablica.podajDlugosc() == 0) {
                    cout << "Tablica pusta" << endl;
                } else {
                    tablica.wydrukujTablice();
                }
                break;
        }
    } while (wybor != 0);
}


//metoda testujaca liste
void Test::testListy() {
    Lista lista;
    int wybor;

    do {
        cout << "Wybierz funkcję listy:" << endl;
        cout << "    1. Dodaj na początek" << endl;
        cout << "    2. Dodaj na koniec" << endl;
        cout << "    3. Dodaj na wybrany indeks" << endl;
        cout << "    4. Usuń pierwszy" << endl;
        cout << "    5. Usuń ostatni" << endl;
        cout << "    6. Usuń wybrany indeks" << endl;
        cout << "    7. Wyszukaj element" << endl;
        cout << "    8. Wydrukuj liste" << endl;
        cout << "    0. Wyjście" << endl;
        cout << "Wybór: ";
        cin >> wybor;
        cout << "\n";
        switch (wybor) {



//wyjscie
            case 0:
                return;



//Dodawanie na początek listy
            case 1:
                int wartosc;
                cout << "Podaj wartość: ";
                cin >> wartosc;

                czas.czasStart();
                lista.dodawanieNaPoczatek(wartosc);
                czas.czasStop();

                cout << "Dodano poprawnie. Czas operacji: " << czas.czasWykonania() << endl;
                break;






//Dodawanie na koniec listy
            case 2:
                cout << "Podaj wartość: ";
                cin >> wartosc;

                czas.czasStart();
                lista.dodawanieNaKoniec(wartosc);
                czas.czasStop();

                cout << "Dodano poprawnie. Czas operacji: " << czas.czasWykonania() << endl;
                break;





//Dodawanie na wybrany indeks listy
            case 3:
                int indeks;
                cout << "Podaj wartość: ";
                cin >> wartosc;
                cout << "Podaj indeks: ";
                cin >> indeks;
                if (indeks > lista.podajDlugosc() || indeks < 0) { //sprawdzanie czyjest sens dodania tego elemmentu
                    cout << "Niepoprawny indeks" << endl;//na poczatek, koniec lub gdzieś w środek
                } else {

                    czas.czasStart();
                    lista.dodawanieNaIndeks(indeks, wartosc);
                    czas.czasStop();

                    cout << "Dodano poprawnie. Czas operacji: " << czas.czasWykonania() << endl;
                }
                break;





//usuwanie elementu z przodu
            case 4:
                if (lista.podajDlugosc() == 0) {//sprawdzanie czy lista nie jest pusta
                    cout << "Lista pusta, nie można mic już z niej usunąć" << endl;
                    break;
                } else {

                    czas.czasStart();
                    lista.usuwaniePierwszego();
                    czas.czasStop();

                    cout << "Usunięto poprawnie. Czas operacji: " << czas.czasWykonania() << endl;
                }

                break;






//usuwanie elementu z końca
            case 5:
                if (lista.podajDlugosc() == 0) { //sprawdzanie czy lista nie jest pusta
                    cout << "Lista pusta, nie można mic już z niej usunąć" << endl;
                } else {

                    czas.czasStart();
                    lista.usuwanieOstatniego();
                    czas.czasStop();

                    cout << "Usunięto poprawnie. Czas operacji: " << czas.czasWykonania() << endl;
                }

                break;



//usuwanie elementu o podanym indeksie
            case 6:
                if (lista.podajDlugosc() == 0) { //sprawdzanie czy lista nie jest pusta
                    cout << "Lista pusta, nie można mic już z niej usunąć" << endl;
                    break;
                }

                cout << "Podaj indeks: ";
                cin >> indeks;
                if (indeks >= lista.podajDlugosc() ||
                    indeks < 0) {//sprawdzanie czy na podanym indeksie znajduje się jakaś wartość
                    cout << "Niepoprawny indeks" << endl;
                } else {

                    czas.czasStart();
                    lista.usuwanieWybranego(indeks);
                    czas.czasStop();

                    cout << "Usunięto poprawnie. Czas operacji: " << czas.czasWykonania() << endl;
                }
                break;




//wyszukiwanie elementu
            case 7:
                if (lista.podajDlugosc() == 0) { //sprawdzanie czy lista jest pusta
                    cout << "Lista pusta" << endl;
                    break;
                }

                cout << "Podaj wartość elementu do wyszukania: ";
                cin >> wartosc;

                czas.czasStart();
                indeks = lista.wyszukajElement(wartosc);      //zwraca -1 jesli elementu niema w liscie
                czas.czasStop();

                if (indeks < 0) {
                    cout << "W liście niema danego elementu. Czas operacji: " << czas.czasWykonania() << endl;
                } else {
                    cout << "Wartość występuje na indeksie: " << indeks << " Czas operacji: " << czas.czasWykonania()
                         << endl;
                }
                break;



//wyświetlanie listy
            case 8:
                if (lista.podajDlugosc() == 0) {
                    cout << "Lista pusta" << endl;
                } else {
                    lista.wydrukujListe();
                }
                break;
        }
    } while (wybor != 0);
}


//metoda testujaca kopiec binarny
void Test::testKopca() {
    KopiecBinarny kopiecBinarny;
    int wybor;

    do {
        cout << "Wybierz funkcję kopca:" << endl;
        cout << "    1. Dodaj wartość" << endl;
        cout << "    2. Usuń korzeń" << endl;
        cout << "    3. Sprawdź czy element jest w kopcu" << endl;
        cout << "    4. Wydrukuj kopiec" << endl;
        cout << "    0. Wyjście" << endl;
        cout << "Wybór: ";
        cin >> wybor;
        cout << "\n";
        switch (wybor) {



//wyjscie
            case 0:
                return;



//Dodawanie na koniec kopca
            case 1:
                int wartosc;
                cout << "Podaj wartość: ";
                cin >> wartosc;

                czas.czasStart();
                kopiecBinarny.dodaj(wartosc);
                czas.czasStop();

                cout << "Dodano poprawnie. Czas operacji: " << czas.czasWykonania() << endl;
                break;



//Usuwanie korzenia
            case 2:
                if (kopiecBinarny.podajDlugosc() == 0) {
                    cout << "Kopiec pusta nie można wykonać operacji." << endl;
                    break;
                }

                czas.czasStart();
                kopiecBinarny.usunKorzen();
                czas.czasStop();

                cout << "Usunięto poprawnie. Czas operacji: " << czas.czasWykonania() << endl;
                break;





//Sprawdzanie czy kopiec zawiera podaną wartość
            case 3:
                cout << "Podaj szukaną wartość: ";
                cin >> wartosc;

                bool istnieje;

                czas.czasStart();
                istnieje = kopiecBinarny.czyIstnieje(wartosc);
                czas.czasStop();

                if (istnieje)cout << "Kopiec zawiera podaną wartość. Czas operacji: " << czas.czasWykonania() << endl;
                else cout << "Kopiec nie zawiera podanej wartości. Czas operacji: " << czas.czasWykonania() << endl;
                break;





//wyswietlanie kopca
            case 4:
                if (kopiecBinarny.podajDlugosc() == 0) { //sprawdzanie czy lista nie jest pusta
                    cout << "Lista pusta" << endl;
                } else {
                    kopiecBinarny.wydrukujKopiec();
                }

                break;

        }
    } while (wybor != 0);
}
