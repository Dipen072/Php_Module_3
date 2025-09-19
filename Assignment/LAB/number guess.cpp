#include <iostream>
#include <cstdlib>   // for rand() and srand()
#include <ctime>     // for time()
using namespace std;

main() 
{
    // Seed the random number generator
    srand(time(0));
    int secretNumber = rand() % 100 + 1; // Random number between 1 and 100

    int guess;
    int attempts = 0;

    cout << "=== Number Guessing Game ===" << endl;
    cout << "Guess a number between 1 and 100." << endl;

    // Loop until user guesses correctly
    while (true) {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess == secretNumber) {
            cout << "?? Congratulations! You guessed the number in " 
                 << attempts << " attempts." << endl;
            break; // Exit loop
        } 
        else if (guess > secretNumber) {
            cout << "Too high! Try again." << endl;
        } 
        else {
            cout << "Too low! Try again." << endl;
        }
    }

    return 0;
}

