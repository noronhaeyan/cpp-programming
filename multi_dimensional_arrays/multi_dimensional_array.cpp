#include <iostream>
using namespace std;

int main()
{
    const int size = 10;
    int multiplicationTable[size][size];

    // Fill the multiplication table
    for (int i = 1; i <= size; ++i)
    {
        for (int j = 1; j <= size; ++j)
        {
            multiplicationTable[i - 1][j - 1] = i * j;
        }
    }

    // Print the multiplication table
    for (int i = 1; i <= size; ++i)
    {
        for (int j = 1; j <= size; ++j)
        {
            cout << multiplicationTable[i - 1][j - 1] << "\t" << flush;
        }
        cout << endl;
    }

    return 0;
}