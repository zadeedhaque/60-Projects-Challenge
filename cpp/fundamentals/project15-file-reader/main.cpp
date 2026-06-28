#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;
void banner()
{
    cout << "=========================================\n";
    cout << "      Z A D E E D   H A Q U E\n";
    cout << "=========================================\n";
    cout << "            FILE READER\n";
    cout << "=========================================\n";
}
int main()
{
    while(true)
    {
        banner();
        cout << "\n1. Read a File\n";
        cout << "2. Exit\n";
        cout << "\nEnter your choice: ";
        int choice;
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
            cout << "\nThank you for using File Reader!\n";
            break;
        }
        if(choice != 1)
        {
            cout << "\nInvalid choice!\n\n";
            continue;
        }
        string filename;
        cout << "\nEnter file name: ";
        getline(cin, filename);
        ifstream file(filename);
        if(!file)
        {
            cout << "\nError: Unable to open file.\n\n";
            continue;
        }
        string line;
        int lineCount = 0;
        int wordCount = 0;
        cout << "\n============= FILE CONTENT =============\n\n";
        while(getline(file, line))
        {
            cout << line << endl;
            lineCount++;
            stringstream ss(line);
            string word;
            while(ss >> word)
            {
                wordCount++;
            }
        }
        file.close();
        cout << "\n=========================================\n";
        cout << "Summary\n";
        cout << "=========================================\n";
        cout << "Lines : " << lineCount << endl;
        cout << "Words : " << wordCount << endl;
        cout << "\nPress Enter to continue...";
        cin.get();
    }
    return 0;
}