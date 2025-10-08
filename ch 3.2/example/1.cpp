#include <iostream>
using namespace std;

class Samp {
    int num;
    public:
    Samp(int n) {
        num = n;
    }
    int getNum() {
        return num;
    }
};
int square(Samp ob) {
    return ob.getNum()*ob.getNum();
}
int main() {
    Samp ob1(5);
    Samp ob2(4);
    cout<<square(ob1)<<endl;
    cout<<square(ob2)<<endl;

    return 0;
}