#include <iostream>
using namespace std;
int main() {
    int  a=1 ;
    while ( a<=7)
    {
        int b=1;
        while ( b <= a)
        {  cout << "*";
        b++;}
        cout << endl;
    
    a++; }
    return 0;
}
