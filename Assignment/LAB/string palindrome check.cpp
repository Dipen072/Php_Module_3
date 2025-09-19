#include <iostream>
#include <string>
using namespace std;

main() 
{
    string str;

    // Input string
    cout << "Enter a string: ";
    cin >> str;

    // Initialize variables
    int start = 0;
    int end = str.length() - 1;
    bool isPalindrome = true;

    // Check palindrome
    while (start < end) {
        if (str[start] != str[end]) {
            isPalindrome = false;
            break;
        }
        start++;
        end--;
    }

    // Output result
    if (isPalindrome)
        cout << str << " is a Palindrome." << endl;
    else
        cout << str << " is NOT a Palindrome." << endl;

    return 0;
}

