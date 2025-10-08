#include<iostream>
using namespace std;

class Samp {
    int a;
public:
    Samp(int n){a=n;}
    int get_a(){return a;}
};
int main() {
    Samp ob[4][2]={
        1,3,
        5,7,
        9,11,
        13,15};
    for (int i=0;i<4;i++)
        cout << ob[i][0].get_a()<<" "<<ob[i][1].get_a()<<endl;
    return 0;
}