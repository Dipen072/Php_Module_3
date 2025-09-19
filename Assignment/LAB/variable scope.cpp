#include <iostream>
using namespace std;

// Global variable
int globalVar = 50;

// Function to demonstrate local and global variables
void demonstrateScope() {
    int localVar = 20; // Local variable

    cout << "Inside function:" << endl;
    cout << "Local variable = " << localVar << endl;
    cout << "Global variable = " << globalVar << endl;
}

main() 
{
    int localVar = 10; // Local variable (different from the one in demonstrateScope)

    cout << "Inside main:" << endl;
    cout << "Local variable = " << localVar << endl;
    cout << "Global variable = " << globalVar << endl;

    cout << "\nCalling demonstrateScope()...\n" << endl;
    demonstrateScope();
    
    // Modifying global variable
    globalVar = 100;
    cout << "\nAfter modifying global variable in main:" << endl;
    cout << "Global variable = " << globalVar << endl;

    return 0;
}

