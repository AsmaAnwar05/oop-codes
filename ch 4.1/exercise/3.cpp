#include <iostream>
using namespace std;

class Letters {
    char ch;
public:
    Letters(char c){ch=c;}
    char getCh(){return ch;}
};
int main() {
    Letters arr[10]={
    Letters('a'),
    Letters('b'),
    Letters('c'),
    Letters('d'),
    Letters('e'),
    Letters('f'),
    Letters('g'),
    Letters('h'),
        Letters('i'),
    Letters('j'),};
    for (int i = 0; i < 10; i++) {
        cout<<arr[i].getCh()<<" ";
    }
}