#include <iostream>
using namespace std;

int x;
int &f();
int main() {
    f()=100;
    cout<<x<<endl;
    return 0;
}

int &f() {
    return x;
}