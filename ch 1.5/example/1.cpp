#include<iostream>
using namespace std;

class Myclass {
    int a;
    public:
    void set(int num){
        a= num;
    }
    int get() {
        return a;
    }
};
int main() {
    Myclass ob1, ob2;
    ob1.set(5);
    ob2.set(86);
    cout << ob1.get()<<endl;
    cout << ob2.get();
}