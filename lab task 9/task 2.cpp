#include <iostream>
using namespace std;
int main() 
{
    int N;
    cout << "Enter the size of the square matrix N: ";
    cin >> N;

    int matrix[N][N];    
    int transpose[N][N];  

    cout << "Enter the elements of the matrix :" << endl;
    for (int a = 0; a < N; a++) 
	{
        for (int h = 0; h < N; h++) 
		{
            cout << "Element [" << a << "][" << h << "]: ";
            cin >> matrix[a][h];
        }
    }

    for (int a = 0; a < N; a++) 
	{
        for (int h = 0; h < N; h++) 
		{
            transpose[h][a] = matrix[a][h];
        }
    }


    cout << "\nThe transposed matrix is:" << endl;
    for (int a = 0; a < N; a++) 
	{
        for (int h = 0; h < N; h++) 
		{
            cout << transpose[a][h] << " ";
        }
        cout << endl;
    }

    return 0;
}

