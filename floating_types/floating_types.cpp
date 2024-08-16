#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float floatVar = 3.14f;
    double doubleVar = 3.141592653589793;
    long double longDoubleVar = 3.14159265358979323846L;

    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;
    cout << "Size of long double: " << sizeof(long double) << " bytes" << endl;

    std::cout << setprecision(20) << "Float value: " << floatVar << std::endl;
    std::cout << setprecision(20) << "Double value: " << doubleVar << std::endl;
    std::cout << setprecision(20) << "Long double value: " << longDoubleVar << std::endl;

    return 0;
}