#include "Notifikaattori.h"
#include <iostream>
using namespace std;

Notifikaattori::Notifikaattori() {
    seuraajat = nullptr;
}

void Notifikaattori::lisaa(Seuraaja* s) {
    s->next = seuraajat;
    seuraajat = s;
}

void Notifikaattori::poista(Seuraaja* s) {
    if (seuraajat == nullptr) return;

    if (seuraajat == s) {
        seuraajat = seuraajat->next;
        s->next = nullptr;
        return;
    }

    Seuraaja* nykyinen = seuraajat;
    while (nykyinen->next != nullptr) {
        if (nykyinen->next == s) {
            nykyinen->next = s->next;
            s->next = nullptr;
            return;
        }
        nykyinen = nykyinen->next;
    }
}

void Notifikaattori::tulosta() {
    Seuraaja* nykyinen = seuraajat;
    while (nykyinen != nullptr) {
        cout << nykyinen->getNimi() << endl;
        nykyinen = nykyinen->next;
    }
}

void Notifikaattori::postita(string viesti) {
    Seuraaja* nykyinen = seuraajat;
    while (nykyinen != nullptr) {
        nykyinen->paivitys(viesti);
        nykyinen = nykyinen->next;
    }
}
