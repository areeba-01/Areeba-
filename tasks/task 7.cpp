#include <iostream>
using namespace std;
int main ()
{
	
int subject1, subject2, subject3 ; 
    cout << "Enter Marks of Subject 1 :" << endl;
    cin >> subject1;
    cout << "Enter Marks of Subject 2 :" << endl;
    cin >> subject2;
    cout<<"Enter Marks of Subejct 3 :" << endl;
    cin >> subject3;

    int avg = (subject1 + subject2 + subject3) / 3,grade;
    cout << "Your Total Avg is : " << avg << endl;
    cout<<"You Grade is :";

    if (avg >= 90){
        cout << "Grade A" << endl; 
    }else if(avg >= 80){
        cout << "Grade B" << endl;
    }else if(avg >= 70){
        cout << "Grade C" << endl;
    }else if(avg >= 60){
        cout << "Grade D" << endl;
    }else {
        cout << "Grade F" <<endl;
}
 return 0;
}
