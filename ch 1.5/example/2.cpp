#include<iostream>
using namespace std;

class Myclass {
    int a;
public:
    int get() {
        return a;
    }
};
int main() {
    Myclass ob1, ob2;
    ob1.a=9;
    ob2.a=10;
    cout << ob1.get()<<endl;
    cout << ob2.get();
}