#include <iostream>
using namespace std;
int main()
{
	int h,num, sum=0;
	cout << " enter the digits "<< endl;
	cin >> num;
	h=num;
	do
	{
	int a=1;
	do
	{
	sum = sum + h%10;
	a++;
}
	while (a<=1);

    h=h/10;
}
    while (h>0);
	cout << "the sum of digits are " << sum << endl;
	return 0;
}
