#include <iostream>
#include <string>

using namespace std;

void banner()
{
    cout << "=========================================\n";
    cout << "      Z A D E E D   H A Q U E\n";
    cout << "=========================================\n";
    cout << "          STRING REVERSER\n";
    cout << "=========================================\n";
}

string reverseString(string text)
{
    string reversed = "";

    for(int i = text.length() - 1; i >= 0; i--)
    {
        reversed += text[i];
    }

    return reversed;
}

int main()
{
    int choice;
    string text;

    while(true)
    {
        banner();

        cout << "\n1. Reverse a String\n";
        cout << "2. Exit\n";

        cout << "\nEnter your choice: ";

        if(!(cin >> choice))
        {
            cin.clear();
            cin.ignore(1000, '\n');

            cout << "\nInvalid input!\n\n";
            continue;
        }

        cin.ignore();

        if(choice == 2)
        {
            cout << "\nThank you for using String Reverser!\n";
            break;
        }

        if(choice != 1)
        {
            cout << "\nInvalid choice!\n\n";
            continue;
        }

        cout << "\nEnter text: ";
        getline(cin, text);

        cout << "\nOriginal String:\n";
        cout << text << endl;

        cout << "\nReversed String:\n";
        cout << reverseString(text) << endl;

        cout << "\nPress Enter to continue...";
        cin.get();
    }

    return 0;
}
