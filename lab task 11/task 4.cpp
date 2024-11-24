#include <iostream>
using namespace std;
void printTempOpinion(int temperature) 
{
    if (temperature <= 10) 
	{
        cout << "Cold" << endl;
    } else if (temperature >= 20 && temperature <= 30) 
	{
        cout << "OK" << endl;
    } else if (temperature > 30) 
	{
        cout << "Hot" << endl;
    } else 
	{
        cout << "No specific opinion for this range." << endl;
    }
}

int main() 
{
    int temp;

    cout << "Enter the temperature: ";
    cin >> temp;

    printTempOpinion(temp);

    return 0;
}

