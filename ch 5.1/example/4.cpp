#include<iostream>
using namespace std;

class Myclass {
    int x;
    public:
    Myclass() {x=0;}
    Myclass(int i) {x=i;}
    int getx() {return x;}
};
int main() {
    Myclass *p;
    Myclass ob(10);
    p=new Myclass[10];
    if (!p) {
        cout<<"memory allocation failed"<<endl;
        return 1;
    }
    int i;
    for (i=0;i<10;i++) {
        p[i]=ob;
    }
    for (i=0;i<10;i++) {
        cout<<"p["<<i<<"]="<<p[i].getx()<<endl;
    }

}