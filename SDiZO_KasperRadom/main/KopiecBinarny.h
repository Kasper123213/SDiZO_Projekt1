
#ifndef SDIZO_KASPERRADOM_KOPIECBINARNY_H
#define SDIZO_KASPERRADOM_KOPIECBINARNY_H


class KopiecBinarny {
public:


    KopiecBinarny();

    ~KopiecBinarny();

    void dodaj(int);

    void usunKorzen();

    bool czyIstnieje(int wartosc);

    void wydrukujKopiec();


    int podajDlugosc();

private:
    int *tablica;
    unsigned int rozmiar;


    void uporzadkojPoDodawaniu();

    void uporzadkojPoUsuwaniu(int index = 1);
};


#endif //SDIZO_KASPERRADOM_KOPIECBINARNY_H
