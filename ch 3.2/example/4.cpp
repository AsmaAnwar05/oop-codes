#include<iostream>
using namespace std;

class Square {
    int num;
public:
    Square(int n) {
        num=n;
        cout<<"Constructing Square "<<endl;
    }
    ~Square() {cout<<"Destructing Square "<<endl;}
    int getNum(){return num;}

};

    /* The destructor is called whenever an objects work is done.
    when an object is passed to the sqr function, a copy of the object is created.
    When the function ends, the destructor for that copy is called first.
    in last, when the main function ends, the destructor for the original object is called. */


int sqr(Square ob) {
    return ob.getNum()*ob.getNum();
}
int main() {
    Square o(5);
    cout<<"after sqr function "<<sqr(o)<<endl;

    return 0;
}