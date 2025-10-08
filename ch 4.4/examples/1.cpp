#include <iostream>
using namespace std;

int main() {
    int *p;
    p=new int; /*new int means: allocate memory in
    the heap for a variable of type iny and It returns the address (pointer) of that memory.
    That address is stored in p.*/
    if (!p) {
        cout<<"Memory allocation failure!"<<endl;
        return 1;
        /* Normally, return 0; means the program has finished successfully.
         return 1; or any other non-zero value means an error or unsuccessful termination.*/
    }
    *p=1000;
    cout<<"Here is integer at p: "<<*p<<endl;
    delete p;
    return 0;

}