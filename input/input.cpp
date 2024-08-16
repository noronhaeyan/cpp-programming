#include <iostream>
using namespace std;

int main()
{

    cout << "Enter your name: " << flush;

    string text;

    cin >> text;

    std::cout << "You entered: " << text << std::endl;
    return 0;
}