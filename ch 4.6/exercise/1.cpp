#include <iostream>
using namespace std;

void neg(int *p);
void neg(int &q);

int main() {
    int i,j;
    i=5;
    j=-7;
    cout<<"before reverse value of i: "<<i<<" value of j: "<<j<<endl;
    neg(&i);
    neg(j);
    cout<<"after reverse value of i: "<<i<<" value of j : "<<j<<endl;

    return 0;
}
void neg(int *p) {
    *p = -*p;
}
void neg(int &q) {
    q = -q;
}