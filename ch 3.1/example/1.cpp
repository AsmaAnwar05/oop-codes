#include <iostream>
using namespace std;

class Myclass {
    int num1,num2;
    public:
    void set(int n1,int n2) {
        num1=n1;
        num2=n2;
    }
    void show() {
        cout<<num1<<" "<<num2<<endl;
    }
};
class Yourclass {
    int num1,num2;
public:
    void set(int n1,int n2) {
        num1=n1;
        num2=n2;
    }
    void show() {
        cout<<num1<<" "<<num2<<endl;
    }
};
int main() {
    Myclass ob1;
    Yourclass ob2;

    ob1.set(10,20);
    ob2 =ob1;//Error occur, because objects not of same type(object of different class)
    ob1.show();
    ob2.show();
}