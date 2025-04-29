#include <iostream>
#include <string>
using namespace std;

// Custom exceptions as simple classes
class InsufficientFundsException {};
class InvalidTransactionException {};
class DivideByZeroException {};

// BankAccount class
class BankAccount {
private:
    string ownerName;
    double balance;

public:
    BankAccount(string name, double initialDeposit) {
        if (initialDeposit < 0) {
            throw InvalidTransactionException();
        }
        ownerName = name;
        balance = initialDeposit;
        cout << "Creating Account for " << ownerName << " with Initial Deposit: " << balance << endl;
    }

    void deposit(double amount) {
        if (amount < 0) {
            throw InvalidTransactionException();
        }
        balance += amount;
        cout << "Depositing " << amount << " into " << ownerName << "'s Account" << endl;
    }

    void withdraw(double amount) {
        if (amount > balance) {
            throw InsufficientFundsException();
        }
        balance -= amount;
        cout << "Withdrawing " << amount << " from " << ownerName << "'s Account" << endl;
    }

    void transfer(BankAccount& to, double amount) {
        if (amount > balance) {
            throw InsufficientFundsException();
        }
        balance -= amount;
        to.balance += amount;
        cout << "Transferring " << amount << " from " << ownerName << " to " << to.ownerName << endl;
    }

    void divideBalance(double divisor) {
        if (divisor == 0) {
            throw DivideByZeroException();
        }
        balance = balance / divisor;
        cout << "Divided Balance of " << ownerName << " by " << divisor << ", New Balance: " << balance << endl;
    }

    void display() {
        cout << "Account Holder: " << ownerName << ", Balance: " << balance << endl;
    }
};

// Main function
int main() {
    try {
        BankAccount rahul("Rahul Sharma", 5000);
        BankAccount priya("Priya Verma", 0);

        rahul.deposit(1000);

        try {
            rahul.withdraw(7000);
        } catch (...) {
            cout << "Error: Insufficient funds!" << endl;
        }

        rahul.transfer(priya, 3000);

        rahul.display();
        priya.display();

        try {
            rahul.divideBalance(0);
        } catch (...) {
            cout << "Error: Cannot divide by zero!" << endl;
        }

    } catch (...) {
        cout << "Error: Invalid transaction!" << endl;
    }

    return 0;
}
