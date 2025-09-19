#include <iostream>
using namespace std;

int main() {
    int num;

    // Input from user
    cout << "Enter a number to display its multiplication table: ";
    cin >> num;

    // For loop to display multiplication table
    cout << "\nMultiplication Table of " << num << ":\n";
    for (int i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }

    return 0;
}

