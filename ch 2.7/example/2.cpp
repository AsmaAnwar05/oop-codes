#include <iostream>
using namespace std;
class MyClass{
    int num;
public:
    MyClass(int n) {num=n;}
    void show(){cout<<num<<endl;}

};
int main() {
    MyClass ob1(2), ob2(7);
    ob1.show();
    ob2.show();

}