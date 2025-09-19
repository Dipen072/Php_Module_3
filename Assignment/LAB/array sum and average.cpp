#include <iostream>
using namespace std;

main() 
{
    int n;

    // Input size of array
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n]; // Array declaration
    int sum = 0;

    // Input array elements
    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i]; // accumulate sum
    }

    // Calculate average
    double average = (double)sum / n;

    // Display results
    cout << "\nSum = " << sum << endl;
    cout << "Average = " << average << endl;

    return 0;
}

