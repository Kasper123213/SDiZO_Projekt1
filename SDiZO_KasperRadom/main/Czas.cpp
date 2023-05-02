#include <iostream>
#include <chrono>
#include "Czas.h"

using namespace std;
using namespace std::chrono;

//metoda uruchamia licznik czasu
void Czas::czasStart() {
    czasPoczatkowy = high_resolution_clock::now();
}

//metoda zatrzymuje licznik czasu
void Czas::czasStop() {
    czasKoncowy = high_resolution_clock::now();
}

//metoda zwraca czas
long Czas::czasWykonania() {

    return duration_cast<nanoseconds>(Czas::czasKoncowy - Czas::czasPoczatkowy).count();

}