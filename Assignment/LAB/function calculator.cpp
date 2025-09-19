#include <iostream>
using namespace std;

// Function definitions
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

double divide(int a, int b) {
    if (b != 0)
        return (double)a / b;  // explicit conversion to double
    else {
        cout << "Error! Division by zero." << endl;
        return 0;
    }
}

main() 
{
    int num1, num2, choice;

    cout << "=== Simple Calculator ===" << endl;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    cout << "\nChoose operation:" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    cout << "\nResult: ";
    switch (choice) {
        case 1: cout << add(num1, num2); break;
        case 2: cout << subtract(num1, num2); break;
        case 3: cout << multiply(num1, num2); break;
        case 4: cout << divide(num1, num2); break;
        default: cout << "Invalid choice!"; break;
    }

    cout << endl;
    return 0;
}

