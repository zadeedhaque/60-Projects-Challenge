#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void displayBanner()
{
    cout << "=========================================\n";
    cout << "        Z A D E E D   H A Q U E\n";
    cout << "=========================================\n";
    cout << "        NUMBER GUESSING GAME\n";
    cout << "=========================================\n\n";
}

int main()
{
    srand(time(0));

    int secretNumber = rand() % 100 + 1;
    int guess = 0;
    int attempts = 0;

    displayBanner();

    cout << "I have selected a number between 1 and 100.\n";
    cout << "Try to guess it!\n\n";

    while (guess != secretNumber)
    {
        cout << "Enter your guess: ";
        cin >> guess;

        attempts++;

        if (guess < secretNumber)
        {
            cout << "Too low! Try again.\n\n";
        }
        else if (guess > secretNumber)
        {
            cout << "Too high! Try again.\n\n";
        }
        else
        {
            cout << "\n=========================================\n";
            cout << "Congratulations!\n";
            cout << "You guessed the number correctly.\n";
            cout << "Secret Number: " << secretNumber << endl;
            cout << "Attempts: " << attempts << endl;
            cout << "=========================================\n";
        }
    }

    return 0;
}
