#include <iostream>
using namespace std;

class Samp {
    int num1,num2;
public:
    Samp(int n1,int n2);
    int divisible();
};
Samp::Samp(int n1,int n2) {
    num1 = n1;
    num2 = n2;
}
inline int Samp::divisible() {
    return !(num1 % num2);
}
int main() {
    Samp ob1(4,2), ob2(5,4);
    if (ob1.divisible()) {
        cout<< "4 divisible by 2"<<endl;
    }
    if (ob2.divisible()) {
        cout << "5 divisible by 4"<<endl;
    }

    return 0;
}

