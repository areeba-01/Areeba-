#include <iostream>
using namespace std;
int main ()
{
	int num , result =1 ;
	cout << "enter the number "<<endl;
	cin >> num ;
	if (num < 0)
	{
		cout << "the factorial of negative num is not possible ";
	}
	else 
{
	int a=1;
    do
	{
	int b=1;
  	do 
  	{
	result*=a;
   	b++;}
   	while(b<=1);
    a++;
    }
    while (a<=num);
cout << "The factorial of " << num <<" is " << result << endl;
}
return 0;
}
