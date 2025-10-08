#include<iostream>
using namespace std;

int main() {
    float toInch;
    int feet;
    cout<<"enter a value for feet(Enter 0 to stop)"<<endl;
    cin>>feet;
    toInch= feet *12; //single line comment added for exercise 2 of 1.4
    for (int i=0;feet!=0;i++) {
        cout<<"Your input feet value to inch is "<<toInch<<endl;
        cout<<"enter a value for feet(Enter 0 to stop)"<<endl;
        cin>>feet;
    }

}