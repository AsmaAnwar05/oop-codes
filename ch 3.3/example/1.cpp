#include <iostream>
#include<cstring>
using namespace std;

class ReturnOb {
    char s[100];
   public:
    void show(){cout<<"You Entered "<<s<<endl;}
    void set(char *str){strcpy(s,str);}

};
//functions return a object of class ReturnOb.so return type is class name 'ReturnOb'
ReturnOb input() {
    char s[100];
    ReturnOb str;
    cout<<"Enter your string: "<<endl;
    cin>>s;
    str.set(s);
    return str;

}
int main() {
    ReturnOb obj;
    obj=input();
    obj.show();

    return 0;
}