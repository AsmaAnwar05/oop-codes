#include <iostream>
using namespace std;
int main() {
    float hour;
    int wage;
    cout<<"Enter working hour and wage of employer"<<endl;
    cin>>hour>>wage;
    int pay= hour*wage;
    cout<<"The employee's gross pay is "<<pay<<endl;

    return 0;
}