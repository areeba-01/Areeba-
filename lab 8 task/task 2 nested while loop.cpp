#include <iostream>
using namespace std;
int main ()
{
	int a=0  , mul;
	cout << "tables are: "<< endl;
	while (a<=5)
	{
		cout << "Multiplication of table " << a << endl ;
		int h=1;
		while (h<=10)
		{ 
			mul=a*h;
			cout << a << "*" << h << "=" << mul << endl ;
			h++;
		}
		cout << endl;
		a++;
	}
	return 0;
}

