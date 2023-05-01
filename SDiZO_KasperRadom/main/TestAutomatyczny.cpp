//
// Created by radom on 24.04.2023.
//
//pierwsze polmiery 10 100 1000 10000 100000
#include <fstream>
#include <cmath>
#include "TestAutomatyczny.h"
#include "Tablica.h"
#include "Lista.h"
#include "KopiecBinarny.h"
#include "iostream"
#include "Czas.h"

using namespace std;

TestAutomatyczny::TestAutomatyczny() {
}
//Uruchamianie testu zlozonosci czasowej tablicy
void TestAutomatyczny::testTablicy() {
    Tablica *tablica = new Tablica;
    long *wynik = new long[5];


    cout << "Rozpoczynam testu tablicy" << endl << "----------------------------------" << endl;
    //testy dodawania na poczatek
    cout << "dodawanie na Początek" << endl;
    for (int i = 0; i < 5; i++) {

        long liczba = pow(10, i + 1);
        for (int j = 0; j < 5 * liczba; j++) {
            tablica->dodawanieNaPoczatek(0);
        }

        czas.czasStart();
        tablica->dodawanieNaPoczatek(0);
        czas.czasStop();

        wynik[i] = czas.czasWykonania();
        cout << wynik[i] << endl;

        delete tablica;
        tablica = new Tablica;
        cout << 5 - i << endl;

    }

    wpiszCzas(wynik, "Tablica_dodawanie_P");






    //testy dodawania na koniec
    cout << "dodawanie na Koniec" << endl;
    for (int i = 0; i < 5; i++) {

        long liczba = pow(10, i + 1);
        for (int j = 0; j < 5 * liczba; j++) {
            tablica->dodawanieNaPoczatek(0);
        }

        czas.czasStart();
        tablica->dodawanieNaKoniec(0);
        czas.czasStop();

        wynik[i] = czas.czasWykonania();
        cout << wynik[i] << endl;

        delete tablica;
        tablica = new Tablica;
        cout << 5 - i << endl;

    }

    wpiszCzas(wynik, "Tablica_dodawanie_K");

    //testy usuwania pierwszego elementu
    cout << "usuwanie pierwszego" << endl;
    for (int i = 0; i < 5; i++) {

        long liczba = pow(10, i + 1);
        for (int j = 0; j < 5 * liczba; j++) {
            tablica->dodawanieNaPoczatek(0);
        }

        czas.czasStart();
        tablica->usuwaniePierwszego();
        czas.czasStop();

        wynik[i] = czas.czasWykonania();
        cout << wynik[i] << endl;

        delete tablica;
        tablica = new Tablica;
        cout << 5 - i << endl;

    }

    wpiszCzas(wynik, "Tablica_usuwanie_P");

    //testy usuwania ostatniego elementu
    cout << "usuwanie Ostatniegp" << endl;
    for (int i = 0; i < 5; i++) {

        long liczba = pow(10, i + 1);
        for (int j = 0; j < 5 * liczba; j++) {
            tablica->dodawanieNaPoczatek(0);
        }

        czas.czasStart();
        tablica->usuwanieOstatniego();
        czas.czasStop();

        wynik[i] = czas.czasWykonania();
        cout << wynik[i] << endl;

        delete tablica;
        tablica = new Tablica;
        cout << 5 - i << endl;

    }

    wpiszCzas(wynik, "Tablica_usuwanie_K");

    //testy wyszukiwania elementu
    cout << "wyszukiwanie wartsosci" << endl;
    for (int i = 0; i < 5; i++) {

        long liczba = pow(10, i + 1);
        for (int j = 0; j < 5 * liczba - 1; j++) {
            tablica->dodawanieNaPoczatek(0);
        }
        tablica->dodawanieNaPoczatek(55);

        czas.czasStart();
        tablica->wyszukajElement(55);
        czas.czasStop();

        wynik[i] = czas.czasWykonania();
        cout << wynik[i] << endl;

        delete tablica;
        tablica = new Tablica;
        cout << 5 - i << endl;

    }
    delete tablica;
    delete wynik;
    wpiszCzas(wynik, "Tablica_szukanie");


}




//Uruchamianie testu zlozonosci czasowej listy
void TestAutomatyczny::testListy() {
    Lista *lista = new Lista;
    long *wynik = new long[10];

    cout << endl << endl << "rozpoczynam testy Listy" << endl << "----------------------------------" << endl;
    //testy dodawania na poczatek
    cout << "dodawanie na Początek" << endl;
    for (int i = 0; i < 5; i++) {

        long liczba = pow(10, i + 1);
        for (int j = 0; j < 5 * liczba; j++) {
            lista->dodawanieNaPoczatek(0);
        }

        czas.czasStart();
        lista->dodawanieNaKoniec(0);
        czas.czasStop();

        wynik[i] = czas.czasWykonania();
        cout << wynik[i] << endl;

        delete lista;
        lista = new Lista;
        cout << 5 - i << endl;

    }

    wpiszCzas(wynik, "Lista_dodawanie_P");






    //testy dodawania na koniec
    cout << "dodawanie na Koniec" << endl;
    for (int i = 0; i < 5; i++) {

        long liczba = pow(10, i + 1);
        for (int j = 0; j < 5 * liczba; j++) {
            lista->dodawanieNaPoczatek(0);
        }

        czas.czasStart();
        lista->dodawanieNaKoniec(0);
        czas.czasStop();

        wynik[i] = czas.czasWykonania();
        cout << wynik[i] << endl;

        delete lista;
        lista = new Lista;
        cout << 5 - i << endl;

    }

    wpiszCzas(wynik, "Lista_dodawanie_K");

    //testy usuwania pierwszego elementu
    cout << "usuwanie pierwszego" << endl;
    for (int i = 0; i < 5; i++) {

        long liczba = pow(10, i + 1);
        for (int j = 0; j < 5 * liczba; j++) {
            lista->dodawanieNaPoczatek(0);
        }

        czas.czasStart();
        lista->usuwaniePierwszego();
        czas.czasStop();

        wynik[i] = czas.czasWykonania();
        cout << wynik[i] << endl;

        delete lista;
        lista = new Lista;
        cout << 5 - i << endl;

    }

    wpiszCzas(wynik, "Lista_usuwanie_P");

    //testy usuwania ostatniego elementu
    cout << "usuwanie Ostatniegp" << endl;
    for (int i = 0; i < 5; i++) {

        long liczba = pow(10, i + 1);
        for (int j = 0; j < 5 * liczba; j++) {
            lista->dodawanieNaPoczatek(0);
        }

        czas.czasStart();
        lista->usuwanieOstatniego();
        czas.czasStop();

        wynik[i] = czas.czasWykonania();
        cout << wynik[i] << endl;

        delete lista;
        lista = new Lista;
        cout << 5 - i << endl;

    }

    wpiszCzas(wynik, "Lista_usuwanie_K");

    //testy wyszukiwania elementu
    cout << "dodawanie na Początek" << endl;
    for (int i = 0; i < 5; i++) {

        long liczba = pow(10, i + 1);
        for (int j = 0; j < 5 * liczba - 1; j++) {
            lista->dodawanieNaPoczatek(0);
        }
        lista->dodawanieNaPoczatek(55);

        czas.czasStart();
        lista->wyszukajElement(55);
        czas.czasStop();

        wynik[i] = czas.czasWykonania();
        cout << wynik[i] << endl;

        delete lista;
        lista = new Lista;
        cout << 5 - i << endl;

    }
    delete lista;
    delete wynik;
    wpiszCzas(wynik, "Lista_szukani");



}







//Uruchamianie testu zlozonosci czasowej kopca binarnego
void TestAutomatyczny::testKopca() {
    KopiecBinarny *kopiecBinarny = new KopiecBinarny;
    long *wynik = new long[5];

    cout << "testy kopca" << endl << "---------------------------------------" << endl;
    //testy dodawania
    cout << "dodawanie " << endl;
    for (int i = 0; i < 5; i++) {

        long liczba = pow(10, i + 1);
        for (int j = 0; j < 5 * liczba; j++) {
            kopiecBinarny->dodaj(0);
        }

        czas.czasStart();
        kopiecBinarny->dodaj(0);
        czas.czasStop();

        wynik[i] = czas.czasWykonania();
        cout << wynik[i] << endl;

        delete kopiecBinarny;
        kopiecBinarny = new KopiecBinarny;
        cout << 5 - i << endl;

    }

    wpiszCzas(wynik, "kopiec_dodawanie");



    //testy usuwania
    cout << "usuwanie korzenia " << endl;
    for (int i = 0; i < 5; i++) {

        long liczba = pow(10, i + 1);
        for (int j = 0; j < 5 * liczba; j++) {
            kopiecBinarny->dodaj(0);
        }

        czas.czasStart();
        kopiecBinarny->usunKorzen();
        czas.czasStop();

        wynik[i] = czas.czasWykonania();
        cout << wynik[i] << endl;

        delete kopiecBinarny;
        kopiecBinarny = new KopiecBinarny;
        cout << 5 - i << endl;

    }

    wpiszCzas(wynik, "kopiec_usuwanie");




    //testy przeszukiwanie
    cout << "dodawanie " << endl;
    for (int i = 0; i < 5; i++) {

        long liczba = pow(10, i + 1);
        for (int j = 0; j < 5 * liczba - 1; j++) {
            kopiecBinarny->dodaj(0);
        }
        kopiecBinarny->dodaj(11);
        czas.czasStart();
        kopiecBinarny->czyIstnieje(11);
        czas.czasStop();

        wynik[i] = czas.czasWykonania();
        cout << wynik[i] << endl;

        delete kopiecBinarny;
        kopiecBinarny = new KopiecBinarny;
        cout << 5 - i << endl;

    }

    wpiszCzas(wynik, "kopiec_szukanie");


}



//metoda slozy do wpieywania zmierzonego czasu do pliku by przeanalizowac dane
void TestAutomatyczny::wpiszCzas(long *wynik, string nazwa) {

    ofstream plikWyjsciowy;
    plikWyjsciowy.open(nazwa + ".xls", fstream::out);

    for (int i = 0; i < 5; i++) {
        plikWyjsciowy << wynik[i] << endl;
//                    plikWyjsciowy << "[" << i << "]" << wynik[i] << endl;
    }

    //Zamknij plik
    plikWyjsciowy.close();
    cout << "zapisano poprawnie" << endl;

}