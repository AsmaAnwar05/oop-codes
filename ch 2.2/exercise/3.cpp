#include<iostream>
using namespace std;

class Box {
    double length, width, height;
    public:
    Box(double l, double h, double w) {
        length=l;
        width=w;
        height=h;
    }
    void vol();
};
void Box::vol() {
    double volume=length*width*height;
    cout <<"Volume of box: "<< volume << endl;
}
int main() {
    Box b1(3.5,2,3.5);
    Box b2(2.1,3.7,2.4);
    b1.vol();
    b2.vol();

    return 0;
}