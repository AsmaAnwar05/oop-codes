// Created by asma on 14/8/25.
//without inline
#include <iostream>

using namespace std;

int sum(int a, int b) {
    return a+b;
}
int sub(int a,int b) {
    return a-b;
}
int mul(int a,int b) {
    return a*b;
}
float dv(int a,int b) {
    return (float)a/b;
}
int mod(int a,int b) {
    return a%b;
}
int main() {
    int x,y,sm,sb,ml,md;
    float div;
    cout<<"Enter two numbers: "<<endl;
    cin>>x>>y;
    sm=sum(x,y);
    sb=sub(x,y);
    ml=mul(x,y);
    div=dv(x,y);
    md=mod(x,y);
    cout<<"Sum: "<<sm<<endl;
    cout<<"Sub: "<<sb<<endl;
    cout<<"Multiplication: "<<ml<<endl;
    cout<<"Division: "<<div<<endl;
    cout<<"Module: "<<md<<endl;

}