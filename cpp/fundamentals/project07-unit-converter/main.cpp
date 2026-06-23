#include <iostream>
#include <iomanip>

using namespace std;

void banner()
{
cout << "=========================================\n";
cout << "      Z A D E E D   H A Q U E\n";
cout << "=========================================\n";
cout << "          UNIT CONVERTER\n";
cout << "=========================================\n";
}

int main()
{
int choice;
double value, result;

```
while(true)
{
    banner();

    cout << "\n1. Kilometers to Miles\n";
    cout << "2. Miles to Kilometers\n";
    cout << "3. Kilograms to Pounds\n";
    cout << "4. Pounds to Kilograms\n";
    cout << "5. Exit\n";

    cout << "\nEnter your choice: ";
    cin >> choice;

    if(cin.fail())
    {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "\nInvalid input!\n\n";
        continue;
    }

    if(choice == 5)
    {
        cout << "\nThank you for using Unit Converter!\n";
        break;
    }

    if(choice < 1 || choice > 5)
    {
        cout << "\nInvalid choice!\n\n";
        continue;
    }

    cout << "\nEnter value: ";
    cin >> value;

    cout << fixed << setprecision(2);

    switch(choice)
    {
        case 1:
            result = value * 0.621371;

            cout << "\nFormula:\n";
            cout << "Miles = KM × 0.621371\n";

            cout << "\nResult:\n";
            cout << value << " KM = "
                 << result << " Miles\n\n";
            break;

        case 2:
            result = value * 1.60934;

            cout << "\nFormula:\n";
            cout << "KM = Miles × 1.60934\n";

            cout << "\nResult:\n";
            cout << value << " Miles = "
                 << result << " KM\n\n";
            break;

        case 3:
            result = value * 2.20462;

            cout << "\nFormula:\n";
            cout << "Pounds = KG × 2.20462\n";

            cout << "\nResult:\n";
            cout << value << " KG = "
                 << result << " Pounds\n\n";
            break;

        case 4:
            result = value * 0.453592;

            cout << "\nFormula:\n";
            cout << "KG = Pounds × 0.453592\n";

            cout << "\nResult:\n";
            cout << value << " Pounds = "
                 << result << " KG\n\n";
            break;
    }

    cout << "Press Enter to continue...";
    cin.ignore();
    cin.get();
}

return 0;
```

}
