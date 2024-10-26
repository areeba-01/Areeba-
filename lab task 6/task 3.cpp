#include <iostream>
using namespace std;
int main()
{
	int guess =0;
	int secretnum =54;
	cout << "Welcome to the Guess the Number game!" << endl;
	cout << "guess the number between 1 to 100"<< endl;
	do
	{
		cout << " enter the guess"<< endl;
		cin >> guess;
		
	    	if (guess<secretnum)
			{
	        	cout << "TRY A BIG NUMBER "<< endl;
           	}
           	else if (guess>secretnum)
           	{
           		cout << "TRY A SMALL NUMBER"<< endl;
			}
			else 
			{
				cout << "CONGRATULATIONS ! YOU GUESSED IT RIGHT"<<endl ;
			}
	}
	while (guess != secretnum);
        
	
return 0;	
}
