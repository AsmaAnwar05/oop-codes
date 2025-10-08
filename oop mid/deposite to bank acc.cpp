#include <iostream>
#include <string>
using namespace std;

class BankAccount {
    string accountNumber;
    double balance;

public:
    // Constructor with initial values
    BankAccount(string accNum = "0000", double bal = 0.0) {
        accountNumber = accNum;
        balance = bal;
    }

    // Getter for accountNumber
    string getAccountNumber() {
        return accountNumber;
    }

    // Getter for balance
    double getBalance() {
        return balance;
    }

    // Deposit method (acts as setter for balance)
    void deposit(double amount) {
        balance =balance+ amount;
    }
};

int main() {
    // Create object with accountNumber "your_ID" and initial balance 1000
    BankAccount myAccount("your_ID", 1000.0);
    cout << "Account Number: " << myAccount.getAccountNumber() << endl;
    cout << "beforte deposit Balance: " << myAccount.getBalance() << endl;
    myAccount.deposit(500);  // balance becomes 1500

    // Deposit 500
    // Print account number and balance
    cout << "after deposit Balance: " << myAccount.getBalance() << endl;

    return 0;
}
