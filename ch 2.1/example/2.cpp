
#include<iostream>
#include<cstring>
using namespace std;

#define SIZE 200
class Strtype {
private:
    char *p;
    int length;
public:
    Strtype();
    ~Strtype();
    void set(char *pntr);
    void show();

};
Strtype::Strtype() {
    p=(char *)malloc(SIZE);
    if (!p) {
        cout<<"Memory allocation failed"<<endl;
        exit(1);
    }
    *p='\0';
    length=0;
}
Strtype::~Strtype(){
    cout<<"Freeing p"<<endl;
    free(p);
}
void Strtype::set(char *pntr) {
    if (strlen(pntr)>=SIZE) {
        cout<<"String is too big"<<endl;
        return;
    }
    strcpy(p,pntr);
    length=strlen(p);

}

void Strtype::show() {
    cout<<p<<" - length: "<<length<<endl;
}
int main(){
Strtype s1,s2;

    s1.set("This is a test.");
    s2.set("I like C++");

    s1.show();
    s2.show();

    return 0;
}
