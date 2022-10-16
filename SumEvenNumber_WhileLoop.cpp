// Take input n from user and print sum of all even number till n.

#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0, i=2;
    cout << "Eneter a number: ";
    cin >> n;

    while (i <= n){
        if(n%2==0){
           sum = sum + i;
        }
           i= i+2;
    }
    cout << "The sum of all even number between 1 to "<<n <<" is: " <<sum << endl;

    return 0;
}