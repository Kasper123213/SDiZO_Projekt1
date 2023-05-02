
#ifndef SDIZO_KASPERRADOM_TESTAUTOMATYCZNY_H
#define SDIZO_KASPERRADOM_TESTAUTOMATYCZNY_H


#include "Czas.h"

class TestAutomatyczny {
public:
    //konstruktor klasy
    TestAutomatyczny();

    //uruchamianjie tewswow funkcji tablicy
    void testTablicy();

    //uruchamianie testowania funkcji listy
    void testListy();

    //uruchamianie testowania funkcji kopca
    void testKopca();

private:
    Czas czas;

    void wpiszCzas(long *wyniki, string nazwa);
};


#endif //SDIZO_KASPERRADOM_TESTAUTOMATYCZNY_H
