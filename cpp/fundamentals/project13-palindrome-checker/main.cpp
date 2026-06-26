#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

void banner()
{
    cout << "=========================================\n";
    cout << "      Z A D E E D   H A Q U E\n";
    cout << "=========================================\n";
    cout << "        PALINDROME CHECKER\n";
    cout << "=========================================\n";
}

string cleanString(string text)
{
    string cleaned = "";

    for(char ch : text)
    {
        if(isalnum(ch))
        {
            cleaned += tolower(ch);
        }
    }

    return cleaned;
}

bool isPalindrome(string text)
{
    string cleaned = cleanString(text);

    int left = 0;
    int right = cleaned.length() - 1;

    while(left < right)
    {
        if(cleaned[left] != cleaned[right])
        {
            return false;
        }

        left++;
        right--;
    }

    return true;
}

int main()
{
    int choice;
    string text;

    while(true)
    {
        banner();

        cout << "\n1. Check Palindrome\n";
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
            cout << "\nThank you for using Palindrome Checker!\n";
            break;
        }

        if(choice != 1)
        {
            cout << "\nInvalid choice!\n\n";
            continue;
        }

        cout << "\nEnter text: ";
        getline(cin, text);

        cout << "\nInput:\n";
        cout << text << endl;

        if(isPalindrome(text))
        {
            cout << "\nResult:\n";
            cout << "\"" << text << "\" is a PALINDROME.\n";
        }
        else
        {
            cout << "\nResult:\n";
            cout << "\"" << text << "\" is NOT a PALINDROME.\n";
        }

        cout << "\nPress Enter to continue...";
        cin.get();
    }

    return 0;
}
