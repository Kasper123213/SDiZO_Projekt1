
#include "ElementListy.h"

//
ElementListy::ElementListy(ElementListy *kolejny, int wartosc, ElementListy *poprzedni) {
    //wskaznik na kolejny element listy
    ElementListy::kolejnyElement = kolejny;
    //wartosc elementu listy
    ElementListy::wartosc = wartosc;
    //wskaznik na poprzedni element listy
    ElementListy::poprzedniElement = poprzedni;
}

