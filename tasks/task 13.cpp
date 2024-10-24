#include <iostream>
using namespace std;
int main() 
{
    int day;
    cout << "Enter a number (1 for Monday, 2 for Tuesday, ..., 7 for Sunday): ";
    cin >> day;

    switch (day) 
	{
        case 1:
            cout << "Start of the workweek" << endl;
            break;
        case 2:
            cout << "It's Tuesday, stay productive" << endl;
            break;
        case 3:
            cout << "Midweek motivation!" << endl;
            break;
        case 4:
            cout << "Almost the weekend" << endl;
            break;
        case 5:
            cout << "TGIF!" << endl;
            break;
        case 6:
            cout << "Relax, it's Saturday" << endl;
            break;
        case 7:
            cout << "Enjoy your Sunday!" << endl;
            break;
        default:
            cout << "Invalid day selection." << endl;
    }

    return 0;
}
