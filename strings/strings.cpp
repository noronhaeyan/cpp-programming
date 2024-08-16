#include <iostream>

using namespace std;

int main()
{
    int value = 6;

    string text = "Value of the variable: ";

    cout << text << value << endl;

    string text2 = "Value of the variable: ";

    string text3 = text2 + to_string(value);

    cout << text3 << endl;

    return 0;
}