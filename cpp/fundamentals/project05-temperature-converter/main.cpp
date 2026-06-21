#include <iostream>
#include <iomanip>

using namespace std;

void displayBanner()
{
    cout << "=========================================\n";
    cout << "      Z A D E E D   H A Q U E\n";
    cout << "=========================================\n";
    cout << "      TEMPERATURE CONVERTER\n";
    cout << "=========================================\n";
}

int main()
{
    int choice;
    double temp, result;

    displayBanner();

    cout << "\n1. Celsius to Fahrenheit\n";
    cout << "2. Fahrenheit to Celsius\n";
    cout << "3. Celsius to Kelvin\n";
    cout << "4. Kelvin to Celsius\n";
    cout << "5. Exit\n";

    cout << "\nEnter your choice: ";
    cin >> choice;

    if(choice == 5)
    {
        cout << "\nGoodbye!\n";
        return 0;
    }

    cout << "\nEnter temperature: ";
    cin >> temp;

    cout << fixed << setprecision(2);

    switch(choice)
    {
        case 1:
            result = (temp * 9.0 / 5.0) + 32;

            cout << "\nFormula:\n";
            cout << "F = (C × 9/5) + 32\n";

            cout << "\nResult:\n";
            cout << temp << " °C = " << result << " °F\n";
            break;

        case 2:
            result = (temp - 32) * 5.0 / 9.0;

            cout << "\nFormula:\n";
            cout << "C = (F - 32) × 5/9\n";

            cout << "\nResult:\n";
            cout << temp << " °F = " << result << " °C\n";
            break;

        case 3:
            result = temp + 273.15;

            cout << "\nFormula:\n";
            cout << "K = C + 273.15\n";

            cout << "\nResult:\n";
            cout << temp << " °C = " << result << " K\n";
            break;

        case 4:
            result = temp - 273.15;

            cout << "\nFormula:\n";
            cout << "C = K - 273.15\n";

            cout << "\nResult:\n";
            cout << temp << " K = " << result << " °C\n";
            break;

        default:
            cout << "\nInvalid choice!\n";
    }

    return 0;
}
