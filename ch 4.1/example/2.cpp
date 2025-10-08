#include<iostream>
using namespace std;

class Samp {
    int a;
    public:
    Samp(int n){a=n;}
    int get_a(){return a;}
};
int main() {
    Samp ob[4]={1,3,5,7};
    for (int i=0;i<4;i++) {
        cout << ob[i].get_a() << endl;
    }
        return 0;
}