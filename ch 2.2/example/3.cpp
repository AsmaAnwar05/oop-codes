
#include<iostream>
#include<cstring>
using namespace std;

#define SIZE 200
class Strtype {
private:
    char *p;
    int length;
public:
    Strtype(char *pntr);
    ~Strtype();
    void show();

};
Strtype::Strtype(char *pntr) {
    length=strlen(pntr);
    p=(char *)malloc(length+1);
    if (!p) {
        cout<<"Memory allocation failed"<<endl;
        exit(1);
    }
    strcpy(p,pntr);
}
Strtype::~Strtype(){
    cout<<"Freeing p"<<endl;
    free(p);
}

void Strtype::show() {
    cout<<p<<" - length: "<<length<<endl;
}
int main(){
    Strtype s1("Hello"),s2("Good Morning");

    s1.show();
    s2.show();

    return 0;
}