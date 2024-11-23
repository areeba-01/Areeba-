#include <iostream>
using namespace std;
int main() 
{
    const int MAX_USERS = 10;  
    double ticketPrice = 500.0;  
    double popcornPrice = 200.0; 
    int numUsers;               

    cout << "How many users will attend the Qawali night? (Maximum " << MAX_USERS << "): ";
    cin >> numUsers;

    if (numUsers > MAX_USERS) 
	{
        cout << "Error: Not more than " << MAX_USERS << " users allowed." << endl;
        return 1; 
    }

    else
    string userNames[MAX_USERS]; 
    string userNames;
    for (int i = 0; i < numUsers; i++) 
	{
        cout << "Enter name for user " << i + 1 << ": ";
        cin>> userNames[i];
    }

    double totalCost = 0.0;
    cout << "\nUser names for the event and their total costs:" << endl;
    for (int i = 0; i < numUsers; i++) 
	{
        double userCost = ticketPrice + popcornPrice;
        totalCost += userCost;
        cout << "User " << i + 1 << ": " << userNames[i] 
             << " - Total Cost: Rs. " << userCost << endl;
    }

    cout << "\nTotal cost for all users: Rs. " << totalCost << endl;

    return 0;
}

