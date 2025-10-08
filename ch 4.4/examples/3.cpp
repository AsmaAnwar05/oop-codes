#include<iostream>
using namespace std;
int main() {
    int *p;
    p=new int[5];
    if (!p) {
        cout<<"memory allocation error"<<endl;
        return 1;
    }

    int i;
    for(i=0;i<5;i++) {
        p[i]=i;
    }
    for(i=0;i<5;i++) {
        cout<<"Here is integer at p["<<i<<"]: "<<p[i]<<endl;

    }
    delete []p;
}