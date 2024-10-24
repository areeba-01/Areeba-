#include <iostream>
using namespace std;
int main () 
{
	int i;
    const int DAYS = 7;
    double temperatures; 
    double sum = 0; 
    double average; 
   
    cout << "Enter the temperature for each day of the week:\n";
    
    for (i = 0; i < DAYS; ++i)
	{
        cout << "Day " << (i + 1) << ": ";
        cin >> temperatures; 
        sum += temperatures; 
    }

    // Calculate the average temperature
    average = sum / DAYS;

    // Display the average temperature
    cout << "The average temperature for the week is: " << average << " degrees." << endl;

    return 0;
}
