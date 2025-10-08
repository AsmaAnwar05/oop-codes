#include<iostream>
using namespace std;

class BankAccount{
    long accountNumber;
    double balance;
public:
    BankAccount(long ac,double b) {
        this->accountNumber = ac;
        this->balance = b;
    }
friend void transfer(BankAccount *a, BankAccount *b,double amount);
double getBalance() {return this->balance;}
    long getAcNumber() {return this->accountNumber;}
};
void transfer(BankAccount *a, BankAccount *b,double amount) {
   if (a->balance>=amount) {

       a->balance -= amount;
     b->balance=b->balance+amount;
       cout<<"After Transfer: "<<endl;
       cout<<"Balance of "<<a->accountNumber<<"is "<<a->balance<<endl;
       cout<<"Balance of "<<b->accountNumber<<"is "<<b->balance<<endl;
   }
   else {
       cout<<"Insufficient balance in account "<<a->accountNumber<<endl;
   }
}
int main() {
    BankAccount acc1(1024578900,5000);//1 type to send value by reference.
    //in function calling there just used &acc1
    BankAccount *acc2 = new BankAccount(1002345430,5000);/*type 2 for send value
    by reference.here a pointer acc2 is declare than in function call just pass acc2*/
    double amount=2000;
    cout<<"Account Balance of "<<acc1.getAcNumber()<<": "<<acc1.getBalance()<<endl;
    cout<<"Account Balance "<<acc2->getAcNumber()<<": "<<acc2->getBalance()<<endl;
    transfer(&acc1,acc2,amount);

}

