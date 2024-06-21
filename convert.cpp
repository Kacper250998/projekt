#include <iostream>
#include "convert.h"

using namespace std;

void convertLength() {
    string fromUnit, toUnit;
    float value;

    cout << "Wybierz jednostke wyjsciowa (milimetr(mm), centymetr(cm), decymetr(dm), metr(m), kilometr(km)): \n";
    cin >> fromUnit;
    cout << "Podaj wartosc: \n";
    cin >> value;
    cout << "Wybierz jednostke docelowa (milimetr(mm), centymetr(cm), decymetr(dm), metr(m), kilometr(km)): \n";
    cin >> toUnit;

    if (fromUnit == "m") value *= 1;
    else if (fromUnit == "cm") value /= 100;
    else if (fromUnit == "mm") value /= 1000;
    else if (fromUnit == "dm") value /= 10;
    else if (fromUnit == "km") value *= 1000;

    if (toUnit == "m") value *= 1;
    else if (toUnit == "cm") value *= 100;
    else if (toUnit == "mm") value *= 1000;
    else if (toUnit == "dm") value *= 10;
    else if (toUnit == "km") value /= 1000;

    cout << "Wynik: " << value << " " << toUnit << endl << endl;
}

void convertWeight() {
    string fromUnit, toUnit;
    double value;

    cout << "Wybierz jednostke wyjsciowa (gram(g), kilogram(kg), tona(t)): \n";
    cin >> fromUnit;
    cout << "Podaj wartosc:\n";
    cin >> value;
    cout << "Wybierz jednostke docelowa (gram(g), kilogram(kg), tona(t)): \n";
    cin >> toUnit;

    if (fromUnit == "g") value *= 1;
    else if (fromUnit == "kg") value *= 1000;
    else if (fromUnit == "t") value *= 1000000;

    if (toUnit == "g") value *= 1;
    else if (toUnit == "kg") value /= 1000;
    else if (toUnit == "t") value /= 1000000;

    cout << "Wynik: " << value << " " << toUnit << endl << endl;
}

void convertVolume() {
    string fromUnit, toUnit;
    double value;

    cout << "Wybierz jednostke wyjsciowa (litr(l), mililitr(ml), metr szescienny(m3)): \n";
    cin >> fromUnit;
    cout << "Podaj wartosc: \n";
    cin >> value;
    cout << "Wybierz jednostke docelowa (litr(l), mililitr(ml), metr szescienny(m3)): \n";
    cin >> toUnit;

    if (fromUnit == "l") value *= 1;
    else if (fromUnit == "ml") value /= 1000;
    else if (fromUnit == "m3") value *= 1000;

    if (toUnit == "l") value *= 1;
    else if (toUnit == "ml") value *= 1000;
    else if (toUnit == "m3") value /= 1000;

    cout << "Wynik: " << value << " " << toUnit << endl << endl;
}