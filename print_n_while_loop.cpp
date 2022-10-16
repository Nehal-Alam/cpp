// Take input n from user and print number till n using while loop.

#include <iostream> 
using namespace std;

int main()
{
    int n;
    int i = 1;
    cout <<"Enter a number: ";
    cin >> n;

    while(i <= n){
        cout << i << endl;
        i++;
    }
    return 0;
}