#include <windows.h>
#include <iostream>
#include <fstream>
#include "Tablica.h"
#include "Test.h"
#include "TestAutomatyczny.h"
#include "Lista.h"

using namespace std;

void menu(){
    cout<<" Wybierz test:\n\t"
          "1. Tablica Dynamiczna\n\t"
          "2. Lista\n\t"
          "3. Kopiec Binarny\n\t"
          "0. Wyjście"<<endl;


}
int main() {

    SetConsoleOutputCP(CP_UTF8);    //ustawianie polskich znaków

    Test test;
    TestAutomatyczny testAutomatyczny;
    cout<<"Autor: Kasper Radom"<<endl;

    int struktura;
    char automatycznie;




    do{
        cout<<"Testować dane z listy? t/n"<<endl;
        cin>>automatycznie;
        menu();
        cout << "Wybór:";
        cin >> struktura;
        cout<<"\n";

        if(struktura == 0) return 0;
        switch (struktura) {

//Testowanie tablicy
            case 1:
                if(tolower(automatycznie)=='n')test.testTablicy();
                else if(tolower(automatycznie)=='t')testAutomatyczny.testTablicy();
                break;

//Testowanie listy
            case 2:
                if(tolower(automatycznie)=='n')test.testListy();
                else if(tolower(automatycznie)=='t')testAutomatyczny.testListy();
                break;

//Testowanie kopca binarnego
            case 3:
                if(tolower(automatycznie)=='n')test.testKopca();
                else if(tolower(automatycznie)=='t')testAutomatyczny.testKopca();
                break;

        }

    }while(struktura!=0);
        return 0;
    }






















//
//#include <iostream>
//#include <fstream>
//using namespace std;
//
//int main()
//{
//    // Otwieramy plik tekstowy do odczytu
//    ifstream inputFile("input.txt");
//
//    // Otwieramy plik CSV (obsługiwany przez Excel) do zapisu
//    ofstream outputFile("output.csv");
//
//    // Pobieramy dane z pliku tekstowego i wpisujemy je do pliku CSV
//    string line;
//    while (getline(inputFile, line))
//    {
//        outputFile << line << endl;
//    }
//    outputFile << "hej" << endl;
//    outputFile << "hej1" << endl;
//    outputFile << "hej2" << endl;
//
//    // Zamykamy pliki
//    inputFile.close();
//    outputFile.close();
//
//    cout << "Gotowe." << endl;
//
//    return 0;
//}