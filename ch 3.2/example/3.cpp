#include<iostream>
using namespace std;

class Square {
    int num;
public:
    Square(int n){num=n;};
    void setNum(int nm){num=nm;};
    int getNum(){return num;};
};
void sqr(Square *ob) {
    ob->setNum(ob->getNum()*ob->getNum());
    cout<<"Copy of o has num value of "<<ob->getNum()<<endl;
}
int main() {
    Square o(5);
    cout<<"Now value of o object is "<<o.getNum()<<endl;
    sqr(&o);
    cout<<"Now, o is changed in main: "<<o.getNum()<<endl;//for sqr function new value updated in num member using pointer

    return 0;
}