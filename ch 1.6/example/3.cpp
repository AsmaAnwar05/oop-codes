#include<iostream>
using namespace std;

int main() {
    int i;
    cout<<"Enter number: "<<endl;
    cin>>i;
    int j, fact=1;
    for (j=i;j>=1;j--)
        fact=fact*j;
    cout<<"factorial is "<<fact<<endl;
}