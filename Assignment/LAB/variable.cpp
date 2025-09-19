#include <iostream>
using namespace std;

main() 
{
    // Constant declaration
    const double PI = 3.14159;   // Value cannot be changed

    // Variable declarations
    int age = 23;
    double radius = 5.5;
    char grade = 'A';
    string name = "Dipen";
    bool isStudent = true;

    // Performing operations
    double area = PI * radius * radius; // using constant
    age = age + 5;  // updating variable

    // Output results
    cout << "Name: " << name << endl;
    cout << "Grade: " << grade << endl;
    cout << "Age after 5 years: " << age << endl;
    cout << "Is Student? " << (isStudent ? "Yes" : "No") << endl;
    cout << "Circle Area with radius " << radius << " = " << area << endl;

    return 0;
}

