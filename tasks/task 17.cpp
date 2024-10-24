#include <iostream>
using namespace std;
int main () 
{
    int number;
    int sum = 0;

    cout << "Enter numbers to sum them up (enter a negative number to stop):" << endl;
  
    while (true)
	{
        cin >> number;

        
        if (number < 0) 
        {break;
		}

        sum += number;
    }

  
    cout << "The total sum of all non-negative numbers entered is: " << sum << endl;

    return 0;
}
