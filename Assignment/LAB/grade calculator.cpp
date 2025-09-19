#include <iostream>
using namespace std;

int main() {
	string name;
    int marks;

    // Input
    cout <<"Enter student's name : ";
    cin >> name;
    
    cout << "Enter student's marks (0 - 100): ";
    cin >> marks;

    // Grade calculation using if-else
    if (marks >= 90) {
        cout << "Grade: A+" << endl;
    } 
    else if (marks >= 80) {
        cout << "Grade: A" << endl;
    } 
    else if (marks >= 70) {
        cout << "Grade: B" << endl;
    } 
    else if (marks >= 60) {
        cout << "Grade: C" << endl;
    } 
    else if (marks >= 50) {
        cout << "Grade: D" << endl;
    } 
    else {
        cout << "Grade: F (Fail)" << endl;
    }

    return 0;
}

