#include <iostream>
using namespace std;
int main ()
{
	int num , result =1 ;
	cout << "enter the number "<<endl;
	cin >> num ;
	if (num<0)
	{
		cout << "the factorial of negative num is not possible";
	}
	else
	{
	int a=1;
	while (a<=num)
	{
	int b=1;
  	while (b<=1)
  	{
	result*=a;
   	b++;
    a++;
	}
    }
cout << "The factorial of " << num <<" is " << result << endl;
}
return 0;
}
