#include <iostream>
using namespace std;
int main () 
{
    double balance;
    double withdraw;
    cout << "Enter your initial balance: $";
    cin >> balance;

    if (balance < 0)
	{
        cout << "Initial balance cannot be negative." << endl;
        return 1; 
    }

    while (true) 
	{
        cout << "Enter the amount to withdraw (enter 0 to exit): $";
        cin >> withdraw;

        if (withdraw == 0) {
            cout << "Exiting the ATM. Thank you!" << endl;
            break; 
        }

        if (withdraw < 0) {
            cout << "Withdraw amount cannot be negative " << endl;
            cout << "Please try again." << endl;
            break;
        }
        
        if (withdraw > balance) 
        {
            cout << "Insufficient funds. Your current balance is: $" << balance << endl;
            break;
        } 
		else 
		{
            balance -= withdraw;
            cout << "Withdraw successful! Your new balance is: $" << balance << endl;
                     }
    }

    return 0;
}
