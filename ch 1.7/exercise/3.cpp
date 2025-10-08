#include<iostream>
using namespace std;

int min(int x, int y)
{ return x < y ? x : y; }
double min(double x, double y)
{ return x > y ? x : y; }
char min(char x, char y)
{ return x < y ? x : y; }

int main() {
    cout<<"Min between 6 and 9 is: "<<min(6,9)<<endl;
    cout<<"Min between 3.34 and 6.78 is: "<<min(.34,6.78)<<endl;
    cout<<"min between  and c is : "<<min('a','c')<<endl;
}