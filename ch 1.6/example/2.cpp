#include <iostream>
using namespace std;

int maqin() {
    int a,b,c;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    c=sum(a,b);
    cout<<"Sum is "<<c<<endl;
    return 0;
}
sum (int a,int b) {
    return a+b;
}