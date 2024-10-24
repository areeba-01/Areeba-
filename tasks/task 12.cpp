#include <iostream>
using  namespace std;
int main()
{
    char Choice;
    int bankBalance=0;
    int amount=0;

    
    cout<<"Welcome to My bank "<<endl;
    cout<<"-------------------------------"<<endl;
    cout<<"Enter Initial Amount";
    cin >> bankBalance;

    cout<<"D= Deposit \nW= Withdraw\nT= Transfer\n: ";
    cin>>Choice;    
    cout<<"-------------------------------"<<endl;
    switch (Choice){
    case 'D':
        cout<<"Deposit Amount:";
        cin>>amount;        
        cout<<"Deducted "<<(bankBalance * 0.005)<<" From your balance"<<endl; 
        cout<<"-------------------------------"<<endl;
        bankBalance -= (bankBalance*0.005); 
        bankBalance+=amount;
        cout<<"-------------------------------"<<endl;

        cout<<"Bank Balance :"<< bankBalance<<endl;
        break;
    case 'W':
        cout<<"Withdraw Amount"<<endl;
        cin>>amount;
        
        if(amount >=bankBalance )
		{
            cout<<"Go get a job not enough money in your account"<<endl;
        }
		else
		{
            
            cout<<"Here You Go!"<<amount<<endl;
            
            cout<<"Deducted "<<(bankBalance * 0.015)<<" From your balance"<<endl; 
            bankBalance-=(bankBalance * 0.015);
            
        }
        cout<<"Bank Balance :"<< bankBalance<<endl;
        break;
    case 'T':
        cout<<"Enter Amount"<<endl;
        cin>>amount;
        cout<<"Enter Account Number of Receipient : "<<endl;
        int accountNo;
        cin>>accountNo;

        if(amount >= bankBalance)
		{ 
            cout<<"Not Enough Money in you account"<<endl;
            
        }
		else
		{
            cout<<"Transferring...."<<endl;
            bankBalance -= amount;
            cout<<"Deducted "<<(bankBalance * 0.025)<<" From your balance"<<endl; 
            bankBalance-= amount*0.025;
        }

        cout<<"Bank Balance :"<< bankBalance<<endl;
        break;
    default:
        cout<<" Invalid Input ....Please Try Again"<<endl;
        break;
    }
    return 0;
}