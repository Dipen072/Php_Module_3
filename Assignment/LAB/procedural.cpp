#include <iostream>
using namespace std;

// Function to calculate area
int calculateArea(int length, int width) {
    return length * width;
}

main() 
{
    int length, width;

    // Input
    cout << "Enter length of rectangle: ";
    cin >> length;
    cout << "Enter width of rectangle: ";
    cin >> width;

    // Function call
    int area = calculateArea(length, width);

    // Output
    cout << "Area of rectangle (POP): " << area << endl;

    return 0;
}

