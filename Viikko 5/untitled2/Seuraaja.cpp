#include "Seuraaja.h"
#include <iostream>
using namespace std;

Seuraaja::Seuraaja(string n) {
    nimi = n;
    next = nullptr;
}

string Seuraaja::getNimi() {
    return nimi;
}

void Seuraaja::paivitys(string viesti) {
    cout << nimi << ": " << viesti << endl;
}
