#include <iostream>
using namespace std;

// BankAccount class
class BankAccount {
private:
    double balance;  // Private data member (encapsulation)

public:
    // Constructor to initialize balance
    BankAccount(double initialBalance = 0.0) {
        if (initialBalance >= 0)
            balance = initialBalance;
        else {
            balance = 0.0;
            cout << "Invalid initial balance. Setting balance to 0." << endl;
        }
    }

    // Function to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Deposit amount must be positive!" << endl;
        }
    }

    // Function to withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        } else {
            cout << "Withdrawal amount must be positive!" << endl;
        }
    }

    // Function to check balance
    double getBalance() {
        return balance;
    }
};

// Main function
main() 
{
    BankAccount account1(1000.0);  // Create account with initial balance

    cout << "Initial Balance: " << account1.getBalance() << endl;

    account1.deposit(500.0);
    cout << "Balance after deposit: " << account1.getBalance() << endl;

    account1.withdraw(300.0);
    cout << "Balance after withdrawal: " << account1.getBalance() << endl;

    account1.withdraw(1500.0); // Trying to withdraw more than balance

    return 0;
}

