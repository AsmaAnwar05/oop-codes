#include<iostream>
using namespace std;

int main() {
    int a,b,d,min;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    /*multiple line comment using
     for as per exercise 2 of 1.4*/
    min=a>b?b:a;
    for (d=2;d<min;d++){
        if (((a%d)==0)&&((b%d)==0))
            break;


        else if (d==min) {
            cout<<"No common denominators."<<endl;
            return 0;
        }
    }
    cout<<"The lowest common denominator is "<<d<<endl;
    return 0;
}
