#include<iostream>
using namespace std;

union Swap {
    unsigned n;
    unsigned char x[2];
    Swap(unsigned b);
    void swapbyte();
};
void Swap::swapbyte() {
    unsigned char t;
    t = x[0];
    x[0] = x[1];
    x[1] = t;
}
Swap::Swap(unsigned b) {
    n=b;
}
int main() {
    Swap s1(1),s2(2);
    cout<<s1.n<<" "<<s2.n<<endl;

    return 0;
}