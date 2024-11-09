#include <iostream>
using namespace std;
int main()
{
	int h,num, sum=0;
	cout << " enter the digits "<< endl;
	cin >> num;
	h=num;
	while (h>0)
	{
	int a=1;
	while (a<=1)
	{
	sum = sum + h%10;
	a++;
    }
    h=h/10;
    }
	cout << "the sum of digits are " << sum << endl;
	return 0;
}
	
