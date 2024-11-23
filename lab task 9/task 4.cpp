#include <iostream>
using namespace std;
int main() 
{
    const int MAX_STUDENTS = 15;  
    double entryFee = 300.0;     
    double snackCost = 150.0;    
    int numStudents;             
    
    cout << "How many students will attend the game night? (Maximum " << MAX_STUDENTS << "): ";
    cin >> numStudents;

    if (numStudents > MAX_STUDENTS) 
	{
        cout << "Error: Not more than " << MAX_STUDENTS << " students allowed." << endl;
        return 1; 
    }

    else
    string studentNames[MAX_STUDENTS]; 
    string studentNames;
    for (int i = 0; i < numStudents; i++) 
	{
        cout << "Enter name for student " << i + 1 << ": ";
       cin>> studentNames[i];
    }

   
    double totalCost = 0.0;
    cout << "\nUser names for the event and their total costs:" << endl;
    for (int i = 0; i < numStudents; i++) 
	{
        double studentCost = entryFee + snackCost;
        totalCost += studentCost;
        cout << "User " << i + 1 << ": " << studentNames[i] 
             << " - Total Cost: Rs. " << studentCost << endl;
    }

  
    cout << "\nTotal cost for all students: Rs. " << totalCost << endl;

    return 0;
}

