#include<iostream>
using namespace std;

void date(char *dt);
void date(int mon, int dy, int yr);

int main() {
    date("08/23/2025");
    date(8,23,2025);

    return 0;
}
void date(char *dt) {
    cout<<"Date : "<<dt<<endl;
}
void date(int mon, int dy, int yr) {
    cout<<"Date : "<<mon<<"-"<<dy<<"-"<<yr<<endl;
}