#include<iostream>
using namespace std;

class Square {
    int num;
    public:
    Square(int n){num=n;};
    void setNum(int n){num=n;};
    int getNum(){return num;};
};
void sqr(Square ob) {
    ob.setNum(ob.getNum()*ob.getNum());
    cout<<"Copy of o has num value of "<<ob.getNum()<<endl;
}
int main() {
    Square o(5);
    sqr(o);
    cout<<"but o.num is unchanged in main: "<<o.getNum()<<endl;

    return 0;
}