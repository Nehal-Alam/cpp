// Prime or not

#include <iostream>
using namespace std;

int main()
{
    int num;
    int i = 0;

    cout << "Enter a number: ";
    cin >> num;

    while (i < num){
        
        if (num % 2 == 0){
            cout << num << " is not a Prime Number" << endl;
            return 0;
        }
        i++;
    }
        
            cout << num << " is a Prime Numner"<< endl;
        
    return 0;
}
