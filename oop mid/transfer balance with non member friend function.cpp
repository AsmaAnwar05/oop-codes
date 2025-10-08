#include<iostream>
using namespace std;

class BankAccount {
    int accountNumber;
    double balance;
    public:
    BankAccount() {
        accountNumber = 0;
        balance = 0.0;
    }
    BankAccount(int accountNumber, double balance) {
        this->accountNumber = accountNumber;
        this->balance = balance;
    }
    double getBalance() {
        return this->balance;
    }
    void setBalance(double balance) {
        this->balance = balance;
    }
    int getAccountNumber() {
        return this->accountNumber;
    }
};
void transfer(BankAccount &A, BankAccount &B, int amount) {
    if (A.getBalance()>=amount) {
        A.setBalance(A.getBalance()-amount);
        B.setBalance(B.getBalance()+amount);
        cout<<"Transfered successfullly"<<endl;
    }
    else {
        cout<<"insufficiant amount"<<endl;
    }
}
int main() {
    BankAccount A(20255, 1000), B(20355, 1500);
    cout<<"balance of bank A: "<<A.getBalance()<<endl;
    cout<<"balance of bank B: "<<B.getBalance()<<endl;
    transfer(A, B, 500);
    cout<<"After transfer";
    cout<<"balance of bank A: "<<A.getBalance()<<endl;
    cout<<"balance of bank B: "<<B.getBalance()<<endl;
}