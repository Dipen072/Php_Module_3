#include <iostream>
using namespace std;

main() 
{
    int num1, num2, sum;

    // Asking for input
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    // Calculate sum
    sum = num1 + num2;

    // Display result
    cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << endl;

    return 0;
}

