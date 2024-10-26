#include <iostream>
using namespace std;
int main()
{ 
    string password ;
	string correctpassword = "0112";
	int attempts=0;
    
     do 
	{
     	cout << "enter the password : ";
     	cin>> password;
        if(password==correctpassword)
    
        {
    	cout << "the password is correct: "<< password << endl;
    	return 0;
	    }
     	else
	    {	attempts++;
		cout << "incorrect password , please try again"<< endl;
	    } 
	}while(attempts<3);
	
		cout << "max attempt reached , exit please";
	return 0;	
}