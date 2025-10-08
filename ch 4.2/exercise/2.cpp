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
Samp *p;
    p=&ob[0][0];
    for (int i=0;i<4;i++) {

        cout << p->get_a()<<" "<<p->get_b()<<", ";
        cout << p->get_a()<<" "<<p->get_b()<<endl;
        p++;
    }

    return 0;
}
