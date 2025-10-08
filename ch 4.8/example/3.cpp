#include<iostream>
#include<cstdlib>
using namespace std;

class Array {
    int size;
    char *p;
    public:
    Array(int num);
    ~Array(){delete []p;}
    char &put(int i);
    char get();
};
Array::Array(int num) {
    p=new char[num];
    if (!p) {
        cout<<"Allocation failure!"<<endl;
        exit(1);
    }
    size=num;
}
char &Array::put(int i) {4
    if (i<0||i>=size) {
        cout<<"Bounds error!!!"<<endl;
        exit(1);
    }
    return p[i];
}
char Array::get(int i) {
    if (i<0||i>=size) {
        cout<<"Bounds error!!!"<<endl;
    }
    return p[i];
}
int main() {
    Array a(10);
    a.put(3)='x';
    a.put(2)='R';
    cout<<a.get(3)<<a.get(2)<<endl;
    a.put(11)='!';
    return 0;
}