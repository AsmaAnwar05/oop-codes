#include <iostream>
#include<cmath>
using namespace std;

int sroot(int a);
long sroot(long a);
double sroot(double a);

int main() {
    cout<<"Square root of 10.50: "<<sroot(10.50)<<endl;
    cout<<"Square root of 20l: "<<sroot(20L)<<endl;
    cout<<"Square root of 30: "<<sroot(30)<<endl;

}
int sroot(int a) {
    return (int)sqrt((double)a);
}
double sroot(double a) {
    return sqrt(a);
}
long sroot(long a) {
    return (long) sqrt((double)a);
}