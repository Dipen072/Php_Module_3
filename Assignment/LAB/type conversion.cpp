#include <iostream>
using namespace std;

main() 
{
    // Implicit Conversion (Type Promotion)
    int intVal = 10;
    double doubleVal = intVal;   // int is promoted to double automatically

    cout << "Implicit Conversion:" << endl;
    cout << "Integer value: " << intVal << endl;
    cout << "Converted to double: " << doubleVal << endl;

    // Explicit Conversion (Type Casting)
    double pi = 3.14159;
    int piInt = (int)pi;          // old-style casting
    int piInt2 = static_cast<int>(pi); // modern C++ casting

    cout << "\nExplicit Conversion:" << endl;
    cout << "Original double value (pi): " << pi << endl;
    cout << "After casting to int (old style): " << piInt << endl;
    cout << "After casting to int (static_cast): " << piInt2 << endl;

    // Mixed operation to show implicit + explicit
    double result = intVal + pi;          // implicit: intVal promoted to double
    int resultInt = static_cast<int>(pi); // explicit: double ? int

    cout << "\nMixed Example:" << endl;
    cout << "intVal + pi (implicit): " << result << endl;
    cout << "pi explicitly cast to int: " << resultInt << endl;

    return 0;
}

