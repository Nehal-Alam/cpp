#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    float b = 2.5;

    cout << "The value of a + b is: "<< a*b <<endl;

    int c = 'a';
    cout << "The value of c is: " << c << endl;

    char ch = 98;
    cout << "The value of ch is: " << ch << endl;

    int ch2 = 'n';
    cout << "Sum: " << a+b+ch2<<endl;

    cout << "Type Casting int to float: " << (double) a << endl;


    return 0;
}