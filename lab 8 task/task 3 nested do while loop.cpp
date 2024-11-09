#include <iostream>
using namespace std;
int main() {
    int  a=1 ;
    do 
    {
        int b=1;
        do 
        {  cout << "*";
        b++;}
        while ( b <= 9);
        cout << endl;
    a++; }
    while (a<=9);
    return 0;
}
