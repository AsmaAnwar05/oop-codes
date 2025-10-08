#include <iostream>

using namespace std;

inline int sum(int a, int b) {
    return a+b;
}
inline int sub(int a, int b) {
    return a-b;
}
inline int mul(int a, int b) {
    return a*b;
}
inline float dv(int a, int b) {
    return (float)a/b;
}
int main() {
    int x,y,sm,sb,ml;
    float div;
    cout<<"Enter two number"<<endl;
    cin>>x>>y;
    sm=sum(x,y);
    sb=sub(x,y);
    ml=mul(x,y);
    div=dv(x,y);
    cout<<"Sum: "<< sm<<endl;
    cout<<"Sub: "<<sb<<endl;
    cout<<"Mul: "<<ml<<endl;
    cout<<"Div: "<<div<<endl;
    return 0;

    return 0;

}
