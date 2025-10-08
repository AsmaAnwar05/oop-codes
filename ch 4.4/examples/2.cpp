#include<iostream>
using namespace std;

class Samp {
    int i, j;
    public:
    void set(int a,int b) {
        this->i=a;
        this->j=b;
    }
    int get() {return this->i*this->j;}

};
int main() {
    Samp *p;
    p = new Samp;
    if (!p) {
        cout<<"Memory allocation failure!"<<endl;
        return 1;
    }
    p->set(2,3);
    cout<<"product is: "<<p->get()<<endl;
}