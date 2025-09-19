#include <iostream>
using namespace std;

// Define Calculator class
class Calculator {
public:
    // Function for addition
    double add(double a, double b) {
        return a + b;
    }

    // Function for subtraction
    double subtract(double a, double b) {
        return a - b;
    }

    // Function for multiplication
    double multiply(double a, double b) {
        return a * b;
    }

    // Function for division
    double divide(double a, double b) {
        if (b != 0) {
            return a / b;
        } else {
            cout << "Error: Division by zero is not allowed." << endl;
            return 0; // Returning 0 as a safe default
        }
    }
};

main() 
{
    Calculator calc; // Create object of Calculator class

    double num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Addition: " << calc.add(num1, num2) << endl;
    cout << "Subtraction: " << calc.subtract(num1, num2) << endl;
    cout << "Multiplication: " << calc.multiply(num1, num2) << endl;
    cout << "Division: " << calc.divide(num1, num2) << endl;

    return 0;
}

