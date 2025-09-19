#include <iostream>
using namespace std;

// Recursive function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;  // Base case
    } else {
        return n * factorial(n - 1);  // Recursive case
    }
}

main() 
{
    int num;

    cout << "Enter a number to find its factorial: ";
    cin >> num;

    if (num < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        cout << "Factorial of " << num << " = " << factorial(num) << endl;
    }

    return 0;
}

