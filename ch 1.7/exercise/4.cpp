#include<iostream>
using namespace std;

#define DELAY 100000

void sleep(int t);
void sleep(char*str);
int main() {
    cout<<".";
    sleep(3);
    cout<<".";
    sleep(2);
    cout<<".";
    return 0;

}
void sleep(int t) {
    for (int i=0;i<t;i++) {
        for (long j=0;j<DELAY; j++);
    }
}
void sleep(char *str) {
    int n=atoi(str);
    sleep(n);
}