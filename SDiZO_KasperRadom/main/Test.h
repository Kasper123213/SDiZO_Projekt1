//
// Created by radom on 24.03.2023.
//

#ifndef SDIZO_KASPERRADOM_TEST_H
#define SDIZO_KASPERRADOM_TEST_H


#include "Czas.h"

class Test {
private:
    Czas czas;
public:
    Test();
    //uruchamianie testowania funkcji tablicy
    void testTablicy();
    //uruchamianie testowania funkcji listy
    void testListy();
    //uruchamianie testowania funkcji kopca
    void testKopca();
};


#endif //SDIZO_KASPERRADOM_TEST_H
