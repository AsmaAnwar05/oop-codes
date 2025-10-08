#include <iostream>
using namespace std;
int main() {
    float hour;
    int wage;
    cout<<"Enter working hour and wage of employer"<<endl;
    cin>>hour>>wage;
    int pay= hour*wage; //single line comment added for exercise 2 of 1.4
    cout<<"The employee's gross pay is "<<pay<<endl;

    return 0;
}