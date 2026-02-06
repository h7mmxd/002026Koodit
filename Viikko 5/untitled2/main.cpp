#include <iostream>
#include "Notifikaattori.h"
#include "Seuraaja.h"
using namespace std;

int main() {
    Notifikaattori n;

    Seuraaja a("Anna");
    Seuraaja b("Bertta");
    Seuraaja c("Calle");

    n.lisaa(&a);
    n.lisaa(&b);
    n.lisaa(&c);

    n.tulosta();
    n.postita("Hei seuraajat");

    n.poista(&b);

    n.tulosta();
    n.postita("Uusi viesti");

    return 0;
}
