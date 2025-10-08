#include <iostream>
using namespace std;

class Myclass {
    int who;
    public:
    Myclass(int n) {
       who=n;
       cout<<"Constructing "<<who<<endl;
    }
    ~Myclass() {cout<<"Destructing "<<who<<endl;}
    int id(){return who;}
};
void f(Myclass &o) {
    cout<<"Received: "<<o.id()<<endl;
}
int main() {
    Myclass x(1);
    f(x);
    return 0;
}