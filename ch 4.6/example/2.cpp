#include<iostream>
#include<cmath>
using namespace std;

void myRound(double &num);
int main() {
    double i=100.4;
    cout<<i<<" rounded is: ";
    myRound(i);
    cout<<i<<endl;

    return 0;
}

void myRound(double &num) {
    double frac;
    double val;
    frac=modf(num,&val);

    if (frac<0.5)num=val;
    else num=val+1.0;
}
/*modf is a library function. First parameter → the floating-point number we want to split.
Second parameter (intpart) → a pointer to double, where the integer part will be stored.
Return value → the fractional part of the number.
if (frac<0.5) the integer part of number which is stored in val will be store in num.
    if fraction part is greater than .5,  num=val(which is integer part)+1.0;*/