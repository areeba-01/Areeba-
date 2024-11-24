#include <iostream>
using namespace std;
int findLargest(int a, int b, int c) 
{
    if (a >= b && a >= c) 
	{
        return a;
    } 
	else if (b >= a && b >= c) 
	{
        return b;
    } 
	else 
	{
        return c;
    }
}

int main() 
{
    int num1, num2, num3;
    
    cout << "Enter the first integer: ";
    cin >> num1;
    cout << "Enter the second integer: ";
    cin >> num2;
    cout << "Enter the third integer: ";
    cin >> num3;

    int largest = findLargest(num1, num2, num3);

    cout << "The largest integer is: " << largest << endl;

    return 0;
}

