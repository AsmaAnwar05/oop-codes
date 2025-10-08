#include <iostream>
using namespace std;

int main() {
    float *f;
    long *l;
    char *c;
    c=new char;
    f= new float;
    l=new long;

    if (!c || !f || !l) {
        cout<<"Memory allocation failure";
        return 1;
    }
    *f=10.02;
    *l=23000000;
    *c='a';
    cout<<"values are: "<<*c<<" "<<*f<<" "<<*l<<endl;
delete f;
    delete l;
    delete c;
    return 0;
}