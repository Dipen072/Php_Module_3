#include <iostream>
using namespace std;

// Rectangle class
class Rectangle {
private:
    int length, width;

public:
    // Method to set values
    void setValues(int l, int w) {
        length = l;
        width = w;
    }

    // Method to calculate area
    int calculateArea() {
        return length * width;
    }
};

main() 
{
    Rectangle rect;  // Object created
    int length, width;

    // Input
    cout << "Enter length of rectangle: ";
    cin >> length;
    cout << "Enter width of rectangle: ";
    cin >> width;

    rect.setValues(length, width);

    // Output
    cout << "Area of rectangle (OOP): " << rect.calculateArea() << endl;

    return 0;
}

