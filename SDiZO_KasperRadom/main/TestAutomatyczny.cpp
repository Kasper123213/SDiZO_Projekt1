//
// Created by radom on 24.04.2023.
//

#include <fstream>
#include "TestAutomatyczny.h"
#include "Tablica.h"
#include "Lista.h"
#include "KopiecBinarny.h"
#include "iostream"
#include "Czas.h"

using namespace std;

TestAutomatyczny::TestAutomatyczny() {
}

void TestAutomatyczny::testTablicy() {
    Tablica tablica;
    ifstream plikWejsciowy;
    int wybor;
    int wartosc;
    string sciezka;


    do {


        cout << "Podaj sciezke do pliku" << endl;
        cin >> sciezka;
        cout << endl;


        plikWejsciowy.open(sciezka);


        cout << "Wybierz funkcję tablicy:" << endl;
        cout << "    1. Dodaj na początek" << endl;
        cout << "    2. Dodaj na koniec" << endl;
        cout << "    3. Usuń wybrany indeks" << endl;
        cout << "    4. Wydrukuj tablicę" << endl;
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
                while (plikWejsciowy.good()) {
                    //Wczytaj wartość z pliku
                    plikWejsciowy >> wartosc;
                    tablica.dodawanieNaPoczatek(wartosc);
                }

                //Zamknij plik
                plikWejsciowy.close();
                cout << "Dodano poprawnie" << endl;
                break;






//Dodawanie na koniec tablicy
            case 2:
                while (plikWejsciowy.good()) {
                    //Wczytaj wartość z pliku
                    plikWejsciowy >> wartosc;
                    tablica.dodawanieNaKoniec(wartosc);
                }

                //Zamknij plik
                plikWejsciowy.close();
                cout << "Dodano poprawnie" << endl;
                break;

















//usuwanie elementu o podanym indeksie
            case 3:

                while (plikWejsciowy.good()) {
                    //Wczytaj wartość z pliku
                    plikWejsciowy >> wartosc;
                    if (tablica.podajDlugosc() > wartosc) {
                        tablica.usuwanieWybranego(wartosc);
                    }
                }

                //Zamknij plik
                plikWejsciowy.close();
                cout << "Usunieto poprawnie" << endl;
                break;







//wyświetlanie tablicy
            case 4:
                ofstream plikWyjsciowy;
                plikWyjsciowy.open("wyjscie.txt", fstream::out);


                for (int i = 0; i < tablica.podajDlugosc(); i++) {
                    plikWyjsciowy << "[" << i << "]" << tablica.podajWartosc(i) << endl;
                }

                //Zamknij plik
                plikWyjsciowy.close();
                cout << "zapisano poprawnie" << endl;
                break;
        }
    } while (wybor != 0);


}

void TestAutomatyczny::testListy() {
    Lista lista;
    ifstream plikWejsciowy;
    int wybor;
    int wartosc;
    string sciezka;


    do {


        cout << "Podaj sciezke do pliku" << endl;
        cin >> sciezka;
        cout << endl;


        plikWejsciowy.open(sciezka);


        cout << "Wybierz funkcję listy:" << endl;
        cout << "    1. Dodaj na początek" << endl;
        cout << "    2. Dodaj na koniec" << endl;
        cout << "    3. Usuń wybrany indeks" << endl;
        cout << "    4. Wydrukuj listę" << endl;
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
                while (plikWejsciowy.good()) {
                    //Wczytaj wartość z pliku
                    plikWejsciowy >> wartosc;
                    lista.dodawanieNaPoczatek(wartosc);
                }

                //Zamknij plik
                plikWejsciowy.close();
                cout << "Dodano poprawnie" << endl;
                break;






//Dodawanie na koniec listy
            case 2:
                while (plikWejsciowy.good()) {
                    //Wczytaj wartość z pliku
                    plikWejsciowy >> wartosc;
                    lista.dodawanieNaKoniec(wartosc);
                }

                //Zamknij plik
                plikWejsciowy.close();
                cout << "Dodano poprawnie" << endl;
                break;





//usuwanie elementu o podanym indeksie
            case 3:

                while (plikWejsciowy.good()) {
                    //Wczytaj wartość z pliku
                    plikWejsciowy >> wartosc;
                    if (lista.podajDlugosc() > wartosc) {
                        lista.usuwanieWybranego(wartosc);
                    }
                }

                //Zamknij plik
                plikWejsciowy.close();
                cout << "Usunieto poprawnie" << endl;
                break;







//wyświetlanie listy
            case 4:
                ofstream plikWyjsciowy;
                plikWyjsciowy.open("wyjscie.txt", fstream::out);

                for (int i = 0; i < lista.podajDlugosc(); i++) {
                    plikWyjsciowy << "[" << i << "]" << lista.podajWartosc(i) << endl;
                }

                //Zamknij plik
                plikWyjsciowy.close();
                cout << "zapisano poprawnie" << endl;
                break;
        }
    } while (wybor != 0);

}


void TestAutomatyczny::testKopca() {
    KopiecBinarny kopiecBinarny;
    ifstream plikWejsciowy;
    int wybor;
    int wartosc;
    string sciezka;


    do {


        cout << "Podaj sciezke do pliku" << endl;
        cin >> sciezka;
        cout << endl;


        plikWejsciowy.open(sciezka);


        cout << "Wybierz funkcję listy:" << endl;
        cout << "    1. Dodaj węzeł" << endl;
        cout << "    2. Wydrukuj kopiec" << endl;
        cout << "    0. Wyjście" << endl;
        cout << "Wybór: ";
        cin >> wybor;
        cout << "\n";
        switch (wybor) {



//wyjscie
            case 0:
                return;



//Dodawanie wartosci do kopca
            case 1:
                while (plikWejsciowy.good()) {
                    //Wczytaj wartość z pliku
                    plikWejsciowy >> wartosc;
                    kopiecBinarny.dodaj(wartosc);
                }

                //Zamknij plik
                plikWejsciowy.close();
                cout << "Dodano poprawnie" << endl;
                break;





//wyświetlanie kopca
            case 2:
                ofstream plikWyjsciowy;
                plikWyjsciowy.open("wyjscie.txt", fstream::out);

                for (int i = 0; i < kopiecBinarny.podajDlugosc(); i++) {
                    plikWyjsciowy << "[" << i << "]" << kopiecBinarny.podajWartosc(i) << endl;
                }

                //Zamknij plik
                plikWyjsciowy.close();
                cout << "zapisano poprawnie" << endl;
                break;
        }
    } while (wybor != 0);
}