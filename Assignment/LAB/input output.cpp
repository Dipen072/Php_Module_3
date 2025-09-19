#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int age;

    // Ask for user input
    cout << "Enter your name: ";
    getline(cin, name);   // getline is used to accept full name including spaces

    cout << "Enter your age: ";
    cin >> age;

    // Display personalized greeting
    cout << "\nHello, " << name << "! You are " << age << " years old." << endl;

    return 0;
}

