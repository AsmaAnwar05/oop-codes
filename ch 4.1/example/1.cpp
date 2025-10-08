#include <iostream>
using namespace std;

class Samp {
    int n;
    public:
    void set_n(int a){n=a;}
    int get_n(){return n;}
};
int main() {
    Samp s1[4];
    int i;
    for(i=0;i<4;i++) {
        s1[i].set_n(i);
    }
    for(i=0;i<4;i++) {
        cout<<s1[i].get_n()<<endl;
    }
}