#include<iostream>

using namespace std;

int main() {
    char charecter;
    cout<<"Enter key 'x' to stop\n";

    do {

        cout<<" : ";
        cin>>charecter;
    }while (charecter!='x');

    return 0;
}