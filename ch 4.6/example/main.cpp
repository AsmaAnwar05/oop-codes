#include<iostream>
using namespace std;

void f(int *n) {
    *n = 100;
}

int main() {
    int i = 10;
    cout << "Here is i's value: " << i << endl;  // 10

    f(&i);
    cout << "Here is i's new value: " << i << endl;   // 100
    return 0;
}
/*when we call f(&i), we are passing the address of i.
n is a pointer, so it stores the memory address of i.
*n = 100; means: go to that address and put 100 there.
Since that address is exactly where i is stored, the value of i gets updated directly. */
