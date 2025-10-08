#include<iostream>
#include<cstring>
using namespace std;

class Strtype {
    char *p;
    int len;
    public:
    Strtype();
    Strtype(char *s, int l);
    ~Strtype() {
        delete [] p;
    }
    char *getstring() {
        return p;
    }
    int getlen() {return len;}
};
Strtype::Strtype() {
    p=new char[255];
    if (!p) {
        cout<<"memory allocation failure";
        exit(1);
    }
    *p='\0';
    len=255;
}
Strtype::Strtype(char *s, int l) {
    p=new char[l];
    if (!p) {
        cout<<"memory allocation failure";
        exit(1);
    }
    int slen=strlen(s);
    if (slen>=l) {
        cout<<"String is too big"<<endl;
        exit(1);
    }
    strcpy(p, s);
    len=l;
}
int main() {
    Strtype ob;
    Strtype ob2("This is a test",50);
    cout<<" String: "<<ob2.getstring()<<" and length: "<< ob2.getlen()<<endl;
    cout<<" String: "<<ob.getstring()<<" and length: "<< ob.getlen()<<endl;
}