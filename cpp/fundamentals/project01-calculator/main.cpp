#include <iostream>
#include <iomanip>

using namespace std;

void displayBanner()
{
    cout << "=========================================\n";
    cout << "     Z A D E E D   H A Q U E\n";
    cout << "=========================================\n";
    cout << "        C++ Calculator Project\n";
    cout << "=========================================\n\n";
}

void displayMenu()
{
    cout << "\nChoose an operation:\n";
    cout << "1. Addition (+)\n";
    cout << "2. Subtraction (-)\n";
    cout << "3. Multiplication (*)\n";
    cout << "4. Division (/)\n";
    cout << "5. Exit\n";
    cout << "\nEnter your choice: ";
}

int main()
{
    int choice;
    double num1, num2, result;
    char again;

    displayBanner();

    do
    {
        displayMenu();
        cin >> choice;

        if(choice == 5)
        {
            cout << "\nThank you for using Zadeed's Calculator!\n";
            break;
        }

        if(choice < 1 || choice > 5)
        {
            cout << "\nInvalid choice!\n";
            continue;
        }

        cout << "\nEnter first number: ";
        cin >> num1;

        cout << "Enter second number: ";
        cin >> num2;

        switch(choice)
        {
            case 1:
                result = num1 + num2;
                cout << "\nResult = " << fixed << setprecision(2)
                     << result << endl;
                break;

            case 2:
                result = num1 - num2;
                cout << "\nResult = " << fixed << setprecision(2)
                     << result << endl;
                break;

            case 3:
                result = num1 * num2;
                cout << "\nResult = " << fixed << setprecision(2)
                     << result << endl;
                break;

            case 4:
                if(num2 == 0)
                {
                    cout << "\nError: Cannot divide by zero!\n";
                }
                else
                {
                    result = num1 / num2;
                    cout << "\nResult = " << fixed << setprecision(2)
                         << result << endl;
                }
                break;
        }

        cout << "\nPerform another calculation? (Y/N): ";
        cin >> again;

    } while(again == 'Y' || again == 'y');

    cout << "\nGoodbye!\n";

    return 0;
}
