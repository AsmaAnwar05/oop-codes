#include<iostream>
using namespace std;

void of(int b);
void of(int b,int c);

int main() {
    of(10);
    of(20,30);
    return 0;
}
void of(int a) {
    cout<<"value: "<<a<<endl;

}
void of(int a,int b) {
    cout<<"values : "<<a<<" "<<b<<" "<<endl;
}

