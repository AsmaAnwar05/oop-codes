#include <iostream>
using namespace std;

class Myclass {
    int x;
    public:
    Myclass() {
        x = 0;
    }
    Myclass(int n) {x=n;}
    int getx(){return x;}
};
int main() {
    Myclass o1(10);
    Myclass o2;

    cout << "o1: "<< o1.getx() << endl;
    cout << "o2: "<< o2.getx() << endl;
}