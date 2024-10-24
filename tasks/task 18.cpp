#include <iostream>
using namespace std;
int main() 
{
    int n, sum = 0,i = 1;

    cout << "Enter a positive integer n: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 1; 
    }

    while (i <= n) {
        sum += i; 
        i += 2;  
    }

    cout << "The sum of all odd numbers between 1 and " << n << " is: " << sum << endl;

    return 0;
}
