#include <iostream>
using namespace std;
int main() {
    int a=1 ;
    while ( a<=9 )
    {
    	int b=1;
        while (b <= 9)
        {  cout << "*";
        b++;
		}
        cout << endl;
        a++;
    }
    return 0;
}

