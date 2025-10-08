#include <iostream>
using namespace std;

int main() {
    int *p;
    p=new int(9);
    if (!p) {
        cout<<"memory allocation failure";
        return 1;
    }
    cout<<"Value of p: "<<*p<<endl;
}