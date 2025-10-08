#include <iostream>
using namespace std;

class letters {
    char ch;
    public:
    letters(char c){ch=c;}
    char getCh(){return ch;}
};
int main() {
    letters arr[10]={'a','b','c','d','e','f', 'g','h','i', 'j'};
    for (int i = 0; i < 10; i++) {
        cout<<arr[i].getCh()<<" ";
    }
}