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
    Myclass o2[10]={1, 3,5,8,3,6,4,78,2,8};

    int i;

    for (i=0;i<10;i++) {
        cout << "o1["<<i<<"]: "<< o1[i].getx() << endl;
        cout << "o2["<<i<<"]: "<< o2[i].getx() << endl;

    }


}