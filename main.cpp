#include <iostream>
#include "convert.h"

using namespace std;

int main() {

    int choice;
    while (true) {
        cout << "\nWybierz miare do konwersji:\n";
        cout << "1. Dlugosc\n";
        cout << "2. Waga\n";
        cout << "3. Objetosc\n";
        cout << "4. Wyjscie\n";
        cout << "Wybierz opcje: \n";
        cin >> choice;

        switch (choice) {
            case 1:
                convertLength();
                break;
            case 2:
                convertWeight();
                break;
            case 3:
                convertVolume();
                break;
            case 4:
                return 0;
            default:
                cout << "Nieprawidlowy wybor, sprobuj ponownie.\n"<<endl;
        }
    }
    return 0;
}