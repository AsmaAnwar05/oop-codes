/*
 predict the output of the following program
 */
#include<iostream>
using namespace std;

class Demo {
 public:
 Demo(){cout<<"Demo Constructor"<<endl;}
 ~Demo(){cout<<"Demo Destructor"<<endl;}
};
int main() {
 int a;
 cout<<"Last two digit of ur id"<<endl;
 cin>>a;
 cout<<"Before Block"<<endl;
 {
  a++;
  Demo obj;
  cout<<"inside block with id: "<<a<<endl;
 }
 cout<<"After Block"<<endl;
 return 0;
}
/*
Last two digit of ur id
Before Block
Demo Constructor
inside block with id: 54
Demo Destructor
After Block

 */