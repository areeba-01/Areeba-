#include <iostream>
using namespace std;
int main() {
    int N;
    int sumofsquares = 0;

    std::cout << "Enter a positive integer N: ";
    std::cin >> N;


    if (N <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 1; 
    }

   
    for (int i = 1; i <= N; ++i) {
        sumofsquares += i * i;
    }
    cout << "The sum of squares of the first " << N << " natural numbers is: " << sumofsquares << endl;

    return 0;
}
