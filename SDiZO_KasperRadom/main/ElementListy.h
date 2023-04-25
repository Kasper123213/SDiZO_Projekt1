
#ifndef SDIZO_KASPERRADOM_ELEMENTLISTY_H
#define SDIZO_KASPERRADOM_ELEMENTLISTY_H


class ElementListy {
public:
    ElementListy(ElementListy* kolejny, int wartosc, ElementListy* poprzedni);
    //wskaznik na kolejny element listy
    ElementListy *kolejnyElement;
    ElementListy *poprzedniElement;
    int wartosc;
};


#endif //SDIZO_KASPERRADOM_ELEMENTLISTY_H
