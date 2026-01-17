#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int game(int maxnum) {
    int luku;
    int arvaus;
    int arvaukset = 0;

    srand(time(0));
    luku = rand() % maxnum + 1;

    while (true) {
        cout << "Arvaa luku (1-" << maxnum << "): ";
        cin >> arvaus;
        arvaukset++;

        if (arvaus < luku) {
            cout << "Liian pieni" << endl;
        } else if (arvaus > luku) {
            cout << "Liian suuri" << endl;
        } else {
            return arvaukset;
        }
    }
}

int main() {
    int tulos = game(40);
    cout << "Arvausten määrä: " << tulos << endl;
    return 0;
}
