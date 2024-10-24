#include <iostream>
using namespace std;
int main ()
{
	int num, a;
	cout << "enter the number "<<endl;
	cin >> num;
	cout << "table of "<< num << endl;
	for (a=1; a<=10; a++)
	{
		cout << num << "*" << a << "=" << num * a << endl;
	}
	return 0;
}
