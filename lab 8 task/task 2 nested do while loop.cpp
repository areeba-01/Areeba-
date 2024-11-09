#include <iostream>
using namespace std;
int main ()
{
	int a=0  , mul;
	cout << "tables are: "<< endl;
	do 
	{
		cout << "Multiplication of table " << a << endl ;
		int h=1;
		do 
		{ 
			mul=a*h;
			cout << a << "*" << h << "=" << mul << endl ;
			h++;
		}
		while (h<=10);
		{
		
		cout << endl;
		a++;
	    }
	    
	}
	while (a<=5);
	return 0;
}
