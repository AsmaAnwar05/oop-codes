#include<iostream>
using namespace std;

class Samp {
    int a,b;
public:
    Samp(int i,int j){a=i,b=j;}
    int get_a(){return a;}
    int get_b(){return b;}
};
int main() {
    Samp ob[4][2]={
       Samp(1,2), Samp(3,4),
        Samp(5,6), Samp(7,8),
    Samp(9,10), Samp(12,13),
    Samp(14,15), Samp(16,17)};

    for (int i=0;i<4;i++) {

        cout << ob[i][0].get_a()<<" "<<ob[i][0].get_b()<<", ";
    cout << ob[i][1].get_a()<<" "<<ob[i][1].get_b()<<endl;
    }

    return 0;
}