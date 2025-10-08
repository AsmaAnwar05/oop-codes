#include <iostream>
#include<cstring>
#include<cstdlib>

using namespace std;

class Strtype {
    char *p;
public:
    Strtype(char *s);
    ~Strtype(){delete []p;}
    char *get(){return p;}
};
Strtype::Strtype(char *s) {
    int l;
    l =strlen(s)+1;
    p=new char[l];
    if (!p) {
        cout<<"Allocation failure"<<endl;
        exit(1);
    }
    strcpy(p,s);
}
void show(Strtype &x) {
    char *s;
    s=x.get();
    cout<<s<<endl;
}
int main() {
    Strtype a("Hello"), b("There");
    show(a);
    show(b);
    return 0;
}
