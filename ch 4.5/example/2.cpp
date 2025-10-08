#include<iostream>
using namespace std;

class Samp {
    int i, j;
public:
    Samp(int a,int b) {
        this->i=a;
        this->j=b;
    }
    int get() {return this->i*this->j;}

};
int main() {
    Samp *p;
    p = new Samp(6,5);
    if (!p) {
        cout<<"Memory allocation failure!"<<endl;
        return 1;
    }

    cout<<"product is: "<<p->get()<<endl;
}