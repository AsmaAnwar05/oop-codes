#include <iostream>
using namespace std;
class Samp{
    int num1,num2;
public:
    Samp(int n1, int n2) {
        num1=n1;
        num2=n2;
    }
    int divisible(){return !(num1%num2);}
};
int main() {
    Samp ob1(2,2), ob2(7,3);
    if (ob1.divisible()) {
        cout<< "2 divisible by 2"<<endl;
    }
    if (ob2.divisible()) {
        cout << "7 divisible by 3"<<endl;
    }
}