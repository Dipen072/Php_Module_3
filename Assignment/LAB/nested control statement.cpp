#include <iostream>
using namespace std;

main() {
    int rows;

    // Input number of rows
    cout << "Enter number of rows for the triangle: ";
    cin >> rows;

    // Outer loop for rows
    for (int i = 1; i <= rows; i++) {
        // Inner loop for stars
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl; // Move to next line after each row
    }

    return 0;
}

