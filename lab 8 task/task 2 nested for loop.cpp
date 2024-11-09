#include <iostream>
using namespace std;
int main ()
{
	int a=0 , h=1 , mul;
	cout << "tables are: "<< endl;
	for (a=0;a<=5;a++)
	{
		cout << "Multiplication of table "<< a<< endl;
		for (h=1;h<=10;h++)
		{
			mul=a*h;
			cout << a << "*" << h << "=" << mul << endl ;
		}
		cout << endl;
	}
	return 0;
}

