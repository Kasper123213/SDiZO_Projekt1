
//kopiec maksymalny
#include <iostream>
#include "KopiecBinarny.h"

using namespace std;

//konstruktor kopca
KopiecBinarny::KopiecBinarny() {
    KopiecBinarny::tablica = NULL;
    KopiecBinarny::rozmiar = 0;
}

//destruktor kopca
KopiecBinarny::~KopiecBinarny() {

    if (KopiecBinarny::rozmiar > 0) {   //jesli tablica zawiera jakis element to usuwamy tablice
        delete[]tablica;
    }

}


void KopiecBinarny::dodaj(int wartosc) {
        int *nowaTablica = new int[rozmiar + 1];

        for (int i = 0; i < rozmiar; i++) {    //przepisujemy starą tablicę
            nowaTablica[i] = tablica[i];
        }

        nowaTablica[rozmiar] = wartosc;   //wpisujemy nową wartość na koniec tablicy

        delete[] tablica;   //usuwanie starej tablicy

        tablica = nowaTablica; //przypisywanie tablicy do zmiennej globalnej

        rozmiar++;  //inkrementacja rozmiaru tablicy

        uporzadkojPoDodawaniu(); //przywracamy wlasnosc kopca
}


void KopiecBinarny::uporzadkojPoDodawaniu() {
    int indeks = rozmiar;     //tworzymy robocze zmienne
    int wartosc;
    while (indeks > 1) {
        //jesli rodzic jest mniejszy od potomka to zamieniamy ich miejscami
        if (tablica[indeks - 1] > tablica[int(indeks / 2) - 1]) {
            wartosc = tablica[indeks - 1];
            tablica[indeks - 1] = tablica[int(indeks / 2) - 1];
            tablica[int(indeks / 2) - 1] = wartosc;
        }
        //potem przechodzimy na rodzicaa i powtarzamy algorytm az dojdziemy do korzenia
        indeks = int(indeks / 2);
    }
}


void KopiecBinarny::usunKorzen() {
    tablica[0] = tablica[rozmiar - 1];  //usuwamy kkorzen dajac na jego imiejsce ostatni element tablicy
    int *nowaTablica = new int[rozmiar - 1];  //tworzymy nowa tablice
    for (int i = 0; i < rozmiar - 1; i++) {
        nowaTablica[i] = tablica[i];//przepisujemy watrosci starej tablicy na nowa poza ostatnim elementem
    }
    delete[] tablica;   //usuwanie starej tablicy

    tablica = nowaTablica; //przypisywanie tablicy do zmiennej globalnej

    rozmiar--;  //inkrementacja rozmiaru tablicy

    uporzadkojPoUsuwaniu(); //przywracamy wlasnosc kopca
}


void KopiecBinarny::uporzadkojPoUsuwaniu(int index) {
    int newIndex;   //zmienna pomocnicza
    if (index * 2 > rozmiar) { //sprawdzamy czy wezel niema potomkow
        return;
    } else if (index * 2 + 1 > rozmiar) {//jesli ma tylko lewego potomka, ustawiamy na niego wskaznik pomocniczy
        newIndex = index * 2;
    } else {     //jesli ma obu potomkow ustawiamy wskaznik na wiekszego
        newIndex = tablica[2 * index - 1] < tablica[index * 2] ? index * 2 + 1 : index * 2;
    }

    int wartosc = tablica[newIndex - 1];
    if (wartosc > tablica[index - 1]) {   //sprawdzamy czy syn z najwieksza wartoscia ma wieksza wartosc od ojca
        tablica[newIndex - 1] = tablica[index - 1];   //jesli tak to zamieniamy ich miejscami i porzadkujemy dalej
        tablica[index - 1] = wartosc;
        uporzadkojPoUsuwaniu(newIndex);
    }

}


bool KopiecBinarny::czyIstnieje(int wartosc) {
    for (int i = 0; i < rozmiar; i++) { //sprawdzamy czy w kopcu istnieje podana wartosc
        if (tablica[i] == wartosc)return true; //jesli istnieje zwracamy true
    }
    return false;
}


void KopiecBinarny::wydrukujKopiec() {   //metoda drukujaca kopiec jako tablice
    for (int i = 0; i < rozmiar; i++) {
        cout << "[" << i << "]" << tablica[i] << endl;
    }
}


int KopiecBinarny::podajDlugosc() { return rozmiar; }  //metoda zwracajaca ilosc wezlow w kopcu


int KopiecBinarny::podajWartosc(int indeks) {  //metoda zwracajaca i-ty indeks z tablicy kopca
    return tablica[indeks];
}