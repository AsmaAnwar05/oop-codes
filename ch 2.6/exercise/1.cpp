#include <iostream>
using namespace std;

int myabs(int n);
long myabs(long n);
double myabs(double n);

int main() {
    cout << "Absolute value of -10: "<<myabs(-10) << endl;
    cout<<"Absolute value of -10L: "<<myabs(-10L) << endl;
    cout<<"Absolute value of -10.01: "<<myabs(-10.01) << endl;
}
inline int myabs(int n) {
    cout<<"In Integer abs()"<<endl;
    return n<0? -n : n;
}
inline long myabs(long n) {
    cout<<"In Long abs()"<<endl;
    return n<0? -n : n;
}
inline double myabs(double n) {
    cout<<"In Double abs()"<<endl;
    return n<0? -n : n;
}