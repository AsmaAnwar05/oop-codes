#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;

class Strtype {
    char *p;
public:
    Strtype(char *s);
    Strtype(const Strtype &a);
    ~Strtype(){delete []p;}
    char *get(){return p;}
};
Strtype::Strtype(char *s) {
    int l;
    l=strlen(s)+1;
    p=new char[l];
    if (!p) {
        cout<<"Allocation error"<<endl;
        exit(1);
    }
    strcpy(p,s);
}
Strtype::Strtype(const Strtype &o) {
    int l;
    l=strlen(o.p)+1;
    p=new char[l];
    if (!p) {
        cout<<"Allocation error"<<endl;
        exit(1);
    }
    strcpy(p,o.p);
}
void show(Strtype x) {
    char *s;
    s=x.get();
    cout<<s<<endl;
}
int main() {
    Strtype a("Hello"), b("World");
    show(a);
    show(b);

    return 0;
}
