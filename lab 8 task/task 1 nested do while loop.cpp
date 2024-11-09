#include <iostream>
using namespace std;
int main() {
    int rows=7, a=1 ;
    do 
    {
        int b=1;
        do 
        {  cout << "*";
        b++;}
        while ( b <= a);
        cout << endl;
    a++; }
    while (a<=rows);
    return 0;
}

