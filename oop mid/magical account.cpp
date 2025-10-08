#include<iostream>
using namespace std;

class MagicalAccount {
    double balance;
    public:
    MagicalAccount() {
        balance = 0;
    };
    MagicalAccount(double b) {
        balance = b;
    };
    void show() {
        cout<<"balance: "<<balance<<endl;
    }
    friend void doubleBal(MagicalAccount &ac);
};
void doubleBal(MagicalAccount &ac) {
   ac.balance= ac.balance*2;
}
int main() {
    MagicalAccount account1(1000);
    cout<<"before double ";
    account1.show();
    doubleBal(account1);
    doubleBal(account1);
    cout<<"after double";
    account1.show();
    return 0;
}