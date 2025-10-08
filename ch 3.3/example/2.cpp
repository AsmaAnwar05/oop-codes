#include <iostream>
#include<cstring>
#include<cstdlib>

using namespace std;

class ReturnOb {
    char *s;
public:
    ReturnOb() {
       s='\0'; //Sir boi er '\0' kaj korena.
    }
    ~ReturnOb() {
        if (s) {
            free(s);
            cout<<"Freeing s"<<endl;
        }
    }
    void show(){cout<<"You Entered "<<s<<endl;}
    void set(char *str);

};

void ReturnOb::set(char *str) {
    s=(char *)malloc(strlen(str)+1);
    if (!s) {
        cout<<"memory allocation failed"<<endl;
        exit(1);
    }
    strcpy(s,str);
}
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