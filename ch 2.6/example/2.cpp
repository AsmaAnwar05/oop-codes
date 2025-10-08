#include<iostream>
using namespace std;

inline int min(int num1,int num2) {
    return num1<num2?num1:num2; //mone rakhar jonno - (condition)? (value if True): (value if False)
}
inline long min(long num1,long num2) {
    return num1<num2?num1:num2;
}
inline double min(double num1, double num2) {
    return num1<num2?num1:num2;
}
int main() {
    cout<<min(10,-10)<<endl;
    cout<<min(-10.01,100.002)<<endl;
    cout<<min(-10L,-100L)<<endl;
}