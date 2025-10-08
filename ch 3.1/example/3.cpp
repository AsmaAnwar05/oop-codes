
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
    cout<<"length of "<<p<<" is "<<length<<endl;
}
int main(){
    Strtype t1("Hello"),t2("Good Morning");

    t1.show();
    t2.show();
    t2=t1;
    t1.show();
    t2.show();

    return 0;
}