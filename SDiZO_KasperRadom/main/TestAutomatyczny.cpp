
#include <fstream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include "TestAutomatyczny.h"
#include "Tablica.h"
#include "Lista.h"
#include "KopiecBinarny.h"
#include "iostream"
#include "Czas.h"

using namespace std;

TestAutomatyczny::TestAutomatyczny() {
    srand(std::time(nullptr));
}

//Uruchamianie testu zlozonosci czasowej tablicy
void TestAutomatyczny::testTablicy() {
    Tablica *tablica = new Tablica;
    long *wynik = new long[10];


    cout << "Rozpoczynam testu tablicy" << endl << "----------------------------------" << endl;
    //testy dodawania na poczatek
    cout << "dodawanie na Początek" << endl;
    for (int i = 0; i < 10; i++) {


        for (int j = 0; j < 50000 - 1; j++) {
            tablica->dodawanieNaPoczatek(rand() % 100);
        }

        czas.czasStart();
        tablica->dodawanieNaPoczatek(rand() % 100);
        czas.czasStop();

        wynik[i] = czas.czasWykonania();
        cout << wynik[i] << endl;

        cout << 10 - i << endl;

    }
    delete tablica;
    tablica = new Tablica;
    wpiszCzas(wynik, "Tablica_dodawanie_P");






    //testy dodawania na koniec
    cout << "dodawanie na Koniec" << endl;
    for (int i = 0; i < 10; i++) {


        for (int j = 0; j < 50000 - 1; j++) {
            tablica->dodawanieNaPoczatek(rand() % 100);
        }

        czas.czasStart();
        tablica->dodawanieNaKoniec(rand() % 100);
        czas.czasStop();

        wynik[i] = czas.czasWykonania();
        cout << wynik[i] << endl;


        cout << 10 - i << endl;

    }
    delete tablica;
    tablica = new Tablica;
    wpiszCzas(wynik, "Tablica_dodawanie_K");





    //testy dodawania na wybrany indeks
    cout << "dodawanie na indeks" << endl;
    for (int i = 0; i < 10; i++) {


        for (int j = 0; j < 50000 - 1; j++) {
            tablica->dodawanieNaPoczatek(rand() % 100);
        }

        czas.czasStart();
        tablica->dodawanieNaIndeks(rand() % (tablica->podajDlugosc() - 1), rand() % 100);
        czas.czasStop();

        wynik[i] = czas.czasWykonania();
        cout << wynik[i] << endl;


        cout << 10 - i << endl;

    }
    delete tablica;
    tablica = new Tablica;
    wpiszCzas(wynik, "Tablica_dodawanie_I");






    //testy usuwania pierwszego elementu
    cout << "usuwanie pierwszego" << endl;
    for (int i = 0; i < 10; i++) {


        for (int j = 0; j < 50000 + 1; j++) {
            tablica->dodawanieNaPoczatek(rand() % 100);
        }

        czas.czasStart();
        tablica->usuwaniePierwszego();
        czas.czasStop();

        wynik[i] = czas.czasWykonania();
        cout << wynik[i] << endl;


        cout << 10 - i << endl;

    }
    delete tablica;
    tablica = new Tablica;
    wpiszCzas(wynik, "Tablica_usuwanie_P");




    //testy usuwania ostatniego elementu
    cout << "usuwanie Ostatniegp" << endl;
    for (int i = 0; i < 10; i++) {


        for (int j = 0; j < 50000 + 1; j++) {
            tablica->dodawanieNaPoczatek(rand() % 100);
        }

        czas.czasStart();
        tablica->usuwanieOstatniego();
        czas.czasStop();

        wynik[i] = czas.czasWykonania();
        cout << wynik[i] << endl;

        cout << 10 - i << endl;

    }
    delete tablica;
    tablica = new Tablica;
    wpiszCzas(wynik, "Tablica_usuwanie_K");








    //testy usuwania elementu o podanym indeksie
    cout << "usuwanie indeksu" << endl;
    for (int i = 0; i < 10; i++) {


        for (int j = 0; j < 50000 + 1; j++) {
            tablica->dodawanieNaPoczatek(rand() % 100);
        }

        czas.czasStart();
        tablica->usuwanieWybranego(rand() % (tablica->podajDlugosc() - 1));
        czas.czasStop();

        wynik[i] = czas.czasWykonania();
        cout << wynik[i] << endl;

        cout << 10 - i << endl;

    }
    delete tablica;
    tablica = new Tablica;
    wpiszCzas(wynik, "Tablica_usuwanie_I");








    //testy wyszukiwania elementu
    cout << "wyszukiwanie wartsosci" << endl;
    for (int i = 0; i < 10; i++) {


        for (int j = 0; j < 50000; j++) {
            tablica->dodawanieNaPoczatek(0);
        }
        tablica->dodawanieNaPoczatek(55);

        czas.czasStart();
        tablica->wyszukajElement(55);
        czas.czasStop();

        wynik[i] = czas.czasWykonania();
        cout << wynik[i] << endl;


        cout << 10 - i << endl;

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
    for (int i = 0; i < 10; i++) {


        for (int j = 0; j < 50000 - 1; j++) {
            lista->dodawanieNaPoczatek(rand() % 100);
        }

        czas.czasStart();
        lista->dodawanieNaKoniec(rand() % 100);
        czas.czasStop();

        wynik[i] = czas.czasWykonania();
        cout << wynik[i] << endl;

        cout << 10 - i << endl;

    }
    delete lista;
    lista = new Lista;
    wpiszCzas(wynik, "Lista_dodawanie_P");






    //testy dodawania na koniec
    cout << "dodawanie na Koniec" << endl;
    for (int i = 0; i < 10; i++) {


        for (int j = 0; j < 50000 - 1; j++) {
            lista->dodawanieNaPoczatek(rand() % 100);
        }

        czas.czasStart();
        lista->dodawanieNaKoniec(rand() % 100);
        czas.czasStop();

        wynik[i] = czas.czasWykonania();
        cout << wynik[i] << endl;

        cout << 10 - i << endl;

    }

    delete lista;
    lista = new Lista;
    wpiszCzas(wynik, "Lista_dodawanie_K");




    //testy dodawania na indeks
    cout << "dodawanie na indeks" << endl;
    for (int i = 0; i < 10; i++) {


        for (int j = 0; j < 50000 - 1; j++) {
            lista->dodawanieNaPoczatek(rand() % 100);
        }

        czas.czasStart();
        lista->dodawanieNaIndeks(rand() % 100, rand() % (lista->podajDlugosc()));
        czas.czasStop();

        wynik[i] = czas.czasWykonania();
        cout << wynik[i] << endl;

        cout << 10 - i << endl;

    }

    delete lista;
    lista = new Lista;
    wpiszCzas(wynik, "Lista_dodawanie_I");




    //testy usuwania pierwszego elementu
    cout << "usuwanie pierwszego" << endl;
    for (int i = 0; i < 10; i++) {


        for (int j = 0; j < 50000 + 1; j++) {
            lista->dodawanieNaPoczatek(0);
        }

        czas.czasStart();
        lista->usuwaniePierwszego();
        czas.czasStop();

        wynik[i] = czas.czasWykonania();
        cout << wynik[i] << endl;

        cout << 10 - i << endl;

    }

    delete lista;
    lista = new Lista;
    wpiszCzas(wynik, "Lista_usuwanie_P");

    //testy usuwania ostatniego elementu
    cout << "usuwanie Ostatniegp" << endl;
    for (int i = 0; i < 10; i++) {


        for (int j = 0; j < 50000 + 1; j++) {
            lista->dodawanieNaPoczatek(0);
        }

        czas.czasStart();
        lista->usuwanieOstatniego();
        czas.czasStop();

        wynik[i] = czas.czasWykonania();
        cout << wynik[i] << endl;

        cout << 10 - i << endl;

    }

    delete lista;
    lista = new Lista;
    wpiszCzas(wynik, "Lista_usuwanie_K");




    //testy usuwania elementu o danym indeksie
    cout << "usuwanie indeksu" << endl;
    for (int i = 0; i < 10; i++) {


        for (int j = 0; j < 50000 + 1; j++) {
            lista->dodawanieNaPoczatek(0);
        }

        czas.czasStart();
        lista->usuwanieWybranego(rand() % (lista->podajDlugosc() - 1));
        czas.czasStop();

        wynik[i] = czas.czasWykonania();
        cout << wynik[i] << endl;

        cout << 10 - i << endl;

    }

    delete lista;
    lista = new Lista;
    wpiszCzas(wynik, "Lista_usuwanie_I");






    //testy wyszukiwania elementu
    cout << "dodawanie na Początek" << endl;
    for (int i = 0; i < 10; i++) {


        for (int j = 0; j < 50000; j++) {
            lista->dodawanieNaPoczatek(0);
        }
        lista->dodawanieNaPoczatek(55);

        czas.czasStart();
        lista->wyszukajElement(55);
        czas.czasStop();

        wynik[i] = czas.czasWykonania();
        cout << wynik[i] << endl;


        cout << 10 - i << endl;

    }
    delete lista;
    delete wynik;
    wpiszCzas(wynik, "Lista_szukani");


}


//Uruchamianie testu zlozonosci czasowej kopca binarnego
void TestAutomatyczny::testKopca() {
    KopiecBinarny *kopiecBinarny = new KopiecBinarny;
    long *wynik = new long[10];

    cout << "testy kopca" << endl << "---------------------------------------" << endl;
    //testy dodawania
    cout << "dodawanie " << endl;
    for (int i = 0; i < 10; i++) {


        for (int j = 0; j < 50000 - 1; j++) {
            kopiecBinarny->dodaj(rand() % 100);
        }

        czas.czasStart();
        kopiecBinarny->dodaj(rand() % 100);
        czas.czasStop();

        wynik[i] = czas.czasWykonania();
        cout << wynik[i] << endl;

        cout << 10 - i << endl;

    }

    delete kopiecBinarny;
    kopiecBinarny = new KopiecBinarny;
    wpiszCzas(wynik, "kopiec_dodawanie");



    //testy usuwania
    cout << "usuwanie korzenia " << endl;
    for (int i = 0; i < 10; i++) {


        for (int j = 0; j < 50000 + 1; j++) {
            kopiecBinarny->dodaj(rand() % 100);
        }

        czas.czasStart();
        kopiecBinarny->usunKorzen();
        czas.czasStop();

        wynik[i] = czas.czasWykonania();
        cout << wynik[i] << endl;

        cout << 10 - i << endl;

    }

    delete kopiecBinarny;
    kopiecBinarny = new KopiecBinarny;
    wpiszCzas(wynik, "kopiec_usuwanie");




    //testy przeszukiwanie
    cout << "szukanie " << endl;
    for (int i = 0; i < 10; i++) {


        for (int j = 0; j < 50000 - 1; j++) {
            kopiecBinarny->dodaj(rand() % 100);
        }
        kopiecBinarny->dodaj(11);
        czas.czasStart();
        kopiecBinarny->czyIstnieje(11);
        czas.czasStop();

        wynik[i] = czas.czasWykonania();
        cout << wynik[i] << endl;


        cout << 10 - i << endl;

    }

    delete kopiecBinarny;
    wpiszCzas(wynik, "kopiec_szukanie");


}


//metoda slozy do wpieywania zmierzonego czasu do pliku by przeanalizowac dane
void TestAutomatyczny::wpiszCzas(long *wynik, string nazwa) {

    ofstream plikWyjsciowy;
    plikWyjsciowy.open(nazwa + ".xls", fstream::out);

    for (int i = 0; i < 10; i++) {
        plikWyjsciowy << wynik[i] << endl;
//                    plikWyjsciowy << "[" << i << "]" << wynik[i] << endl;
    }

    //Zamknij plik
    plikWyjsciowy.close();
    cout << "zapisano poprawnie" << endl;

}
