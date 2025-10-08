#include <iostream>
using namespace std;

class Myclass {
    int x;
public:
    Myclass() {
        x = 0;
    }
    Myclass(int n) {x=n;}
    int getx(){return x;}
};
int main() {
    Myclass o1[10];
    Myclass o2[10]={1,2,3,4,5,6,7,8,9,10
};
    int i;
    for (i=0;i<10;i++) {
        cout <<"o1["<<i<<"]: "<< o1[i].getx();
        cout<< endl;
        cout <<"o2["<<i<<"]: "<< o2[i].getx();
        cout<< endl;
    }

}