#include <iostream>
using namespace std;

int &f();
int main() {
    f()=100;
    cout<<x<<endl;
    return 0;
}

int &f() {
    int x;
    return x;
}