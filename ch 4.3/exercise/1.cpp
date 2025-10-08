#include <iostream>
using namespace std;

class Myclass {
    int a,b;
    public:
    Myclass(int n,int m) {this->a=n; this->b=m;}
    int add(){return this->a+this->b;};
    void show();
};
void Myclass::show() {
    int t;
    t=this->add();
    cout<<t<<endl;
}
int main() {
    Myclass myobj(10,20);
    myobj.add();
}