#include<iostream>
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
    l=strlen(s)+1;
    p=new char[l];
    if (!p) {
        cout<<"Allocation error"<<endl;
        exit(1);
    }
    strcpy(p,s);
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
/*a.p হলো আসল object a এর pointer, যা heap এর string এ point করছিলো।
কিন্তু shallow copy এর কারণে x.p আর a.p একই জায়গায় point করেছে।
function শেষ হলে x destructor সেই জায়গা free করেছে।
পরে আবার a destructor একই জায়গা free করতে গিয়ে crash করেছে।*/