#include <iostream>

using namespace std;

void banner()
{
    cout << "=========================================\n";
    cout << "      Z A D E E D   H A Q U E\n";
    cout << "=========================================\n";
    cout << "   MULTIPLICATION TABLE GENERATOR\n";
    cout << "=========================================\n";
}

int main()
{
    int choice;
    int number;

    while(true)
    {
        banner();

        cout << "\n1. Generate Multiplication Table\n";
        cout << "2. Exit\n";

        cout << "\nEnter your choice: ";

        if(!(cin >> choice))
        {
            cin.clear();
            cin.ignore(1000, '\n');

            cout << "\nInvalid input! Please enter a number.\n\n";
            continue;
        }

        if(choice == 2)
        {
            cout << "\nThank you for using the program!\n";
            break;
        }

        if(choice != 1)
        {
            cout << "\nInvalid choice!\n\n";
            continue;
        }

        cout << "\nEnter a number: ";

        if(!(cin >> number))
        {
            cin.clear();
            cin.ignore(1000, '\n');

            cout << "\nInvalid input!\n\n";
            continue;
        }

        cout << "\n=========================================\n";
        cout << "Multiplication Table of " << number << endl;
        cout << "=========================================\n";

        for(int i = 1; i <= 10; i++)
        {
            cout << number
                 << " x "
                 << i
                 << " = "
                 << number * i
                 << endl;
        }

        cout << "\nPress Enter to continue...";
        cin.ignore();
        cin.get();
    }

    return 0;
}
