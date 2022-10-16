// Take input n from user and print sum of the number till n using while loop

#include <iostream>
using namespace std;

int main()
{
    int i = 1, sum = 0, n;
    cout << "Enter a number: ";
    cin >> n;
    while (i <= n)
    {
        sum = sum + i;
        i++;
    }
    cout << "The sum from 1 to " << n << " is: " << sum << endl;
    return 0;
}
