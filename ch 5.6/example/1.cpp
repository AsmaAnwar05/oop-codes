#include <iostream>
using namespace std;
void space(int count)
{
    for( ; count; count --)
        cout <<" ";
}
void space(int count , char ch)
{
    for( ; count; count --)
        cout << ch;
}
int main() {
    void (*fp1)(int);
    void (*fp2)(int , char);
    fp1 = space;
    fp2 = space;
    fp1 (22);
    cout << "|"<<endl;
    fp2(30, 'x');
    cout << "|"<<endl;
    return 0;
}
/*function pointer syntax: func-return-type func-ptr param-type
 *fp1 is a pointer to a function that takes an
 *int parameter and returns type void.*/