#include <iostream>
using namespace std;

class Samp {
    int i,j;
    public:
    void set(int a, int b) {
        i=a;
        j=b;
    }
    int geti() { return i*j;}
};
int main() {
    Samp *s1;
    s1 = new Samp[10];
    for (int i = 0; i < 10; i++) {
        s1[i].set(i,i);
    }
    for (int i = 0; i < 10; i++) {
        cout << "product ["<<i<<"] is: "<<s1[i].geti() << endl;
    }

    delete [] s1;

    return 0;
}