#include <iostream>
using namespace std;

int main() {
    int value1,value2; //double slash use for single line comment
    //read the numbers
    cout<<"Enter two number "<<endl;
    //take input from user
    cin>>value1>>value2;
    //check what value is great
    if (value1>value2) {
        cout<<value1 <<" is greater than " <<value2;
    }
    else if (value1<value2) {
    cout<<value2 <<" is greater than " <<value1;}
    else {
        cout<<"both equal";
    }
}