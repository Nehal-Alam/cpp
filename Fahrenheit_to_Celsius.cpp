// Fahrenheit to Celsius

#include <iostream>
using namespace std;

int main()
{
    float f, fahrenheit;

    cout << "Enter Fahrenheit: ";
    cin >> f;

    fahrenheit = (f - 32) * 5/9;

    cout << f << " Fahrenheit is " <<fahrenheit<< " Calcius"<< endl;

    return 0; 
}