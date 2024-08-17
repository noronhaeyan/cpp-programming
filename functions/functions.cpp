#include <iostream>
using namespace std;

void showMenu()
{
    cout << "1. Search" << endl;
    cout << "2. View Record" << endl;
    cout << "3. Quit" << endl;
}

int main()
{
    showMenu();

    cout << "Enter your selection > " << flush;

    int value;
    cin >> value;

    switch (value)
    {
    case 1:
        cout << "Searching ..." << endl;
        break;
    case 2:
        cout << "Viewing ..." << endl;
        break;
    case 3:
        cout << "Quitting ..." << endl;
        break;
    default:
        cout << "Invalid option." << endl;
        cout << "Please select 1, 2, or 3." << endl;
    }

    return 0;
}