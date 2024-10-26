#include <iostream>
using namespace std;
int main()
{
	int choice;
	cout << "Menu: " << endl;
    cout << "1. Print Hello" << endl; 
    cout << "2. Print World"<< endl; 
    cout << "3. Exit"<< endl;
      cout << "enter your choice" << endl;
    cin >> choice;
while
    switch (choice)
    {
    case 1:
    	cout << "HELLO" << endl;
    	break;
    case 2:
    	cout << "WORLD" << endl;
    	break;
    case 3:
    	cout << "EXIT" << endl ;
    	break;
    default :
    	cout << "invalid entry " << endl;
    	break;
    }
return 0;

}