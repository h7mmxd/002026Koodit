#include "Game.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

Game::Game(int max)
{
    maxNumber = max;
    guesses = 0;

    srand(time(0));
    randomNumber = rand() % maxNumber + 1;
}

void Game::Play()
{
    int guess;

    while (guess != randomNumber)
    {
        cout << "Arvaa luku (1-" << maxNumber << "): ";
        cin >> guess;
        guesses++;

        if (guess < randomNumber)
            cout << "Liian pieni" << endl;
        else if (guess > randomNumber)
            cout << "Liian suuri" << endl;
    }

    printGameResult();
}

void Game::printGameResult()
{
    cout << "Oikea luku: " << randomNumber << endl;
    cout << "Arvauksia: " << guesses << endl;
}
