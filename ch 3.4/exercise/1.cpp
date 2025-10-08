#include <iostream>
using namespace std;
class Pr2;
class Pr1
{
    int printing ;
public :
Pr1 () { printing = 0; }
    void set_print (int status ) { printing = status ; }
    friend int inuse(Pr1 printer1, Pr2 printer2);
};
class Pr2 {
    int printing ;
public :
Pr2 () { printing = 0; }
    void set_print (int status ) {printing = status ;}
    friend int inuse(Pr1 p1, Pr2 p2);
};
int inuse(Pr1 printer1,Pr2 printer2 ) {
    if ((printer1.printing || printer2.printing)==1)
        return 1;
    else
        return 0;
}
int main() {
    Pr1 o1;
    Pr2 o2;
    Pr1 o3;
    o1.set_print (0);
    o2.set_print (0);
    o3.set_print (1);
    cout<<"first taking 01 and 02 printer"<<endl;
    if (inuse(o1,o2)) {
        cout<<"Printer in use"<<endl;
    }
    else
        cout<<"Printer in no use"<<endl;
    cout<<"second taking 01 and 03 printer"<<endl;
    if (inuse(o3,o2)) {
        cout<<"Printer in  use"<<endl;
    }
    else
        cout<<"Printer in no use"<<endl;

}