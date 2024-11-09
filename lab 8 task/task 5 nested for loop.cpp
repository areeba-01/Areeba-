#include <iostream>
using namespace std;
int main()
{
	int h,num, sum=0;
	cout << " enter the digits "<< endl;
	cin >> num;
	for (h=num;h>0;h/=10)
	{
	for (int a=1; a<=1;a++)
	{
	sum = sum + h%10;
    }
    }
	cout << "the sum of digits are " << sum << endl;
	return 0;
}
