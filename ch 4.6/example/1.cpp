#include<iostream>
using namespace std;

void Swapargs(int &x, int &y);

int main() {
    int i,j;
    i=10;
    j=19;
    cout<<"before swap i: " << i <<" and j: "<<j<< endl;
    Swapargs(i,j);
    cout<<"after swap i: " << i <<" and j: "<<j<< endl;

    return 0;
}
void Swapargs(int &x, int &y) {
    int t;
    t=x;
    x=y;
    y=t;
}