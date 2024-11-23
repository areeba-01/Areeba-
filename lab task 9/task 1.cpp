#include <iostream>
using namespace std;
int main() {
    const int SIZE = 3;  
    int numbers[SIZE];   

    cout << "Enter three integer values:" << endl;
    for (int a = 0; a < SIZE; a++) 
	{
        cout << "Value " << a + 1 << ": ";
        cin >> numbers[a];
    }
   
    cout << "\nValues in forward order:" << endl;
    for (int a = 0; a < SIZE; a++) 
	{
        cout << numbers[a] << " ";
    }
    cout << endl;

    cout << "Values in reversed order:" << endl;
    for (int a = SIZE - 1; a >= 0; a--) 
	{
        cout << numbers[a] << " ";
    }
    cout << endl;

    return 0;
}

