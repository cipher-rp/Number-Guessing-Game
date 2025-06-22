#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); // Seed random number generator
    int secretNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    cout << "🎯 Welcome to the Number Guessing Game!\n";
    cout << "🔢 I have selected a number between 1 and 100.\n";

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > secretNumber) {
            cout << "📉 Too high! Try again.\n";
        } else if (guess < secretNumber) {
            cout << "📈 Too low! Try again.\n";
        } else {
            cout << "✅ Correct! You guessed it in " << attempts << " attempts.\n";
        }
    } while (guess != secretNumber);

    return 0;
}
