#include <iostream>
using namespace std;

class area_c1 {
public:
    double height;
    double weight;
};
class rectangle:public area_c1 {
public:
    void getHtWt();
    void getArea();
};
void rectangle::getHtWt() {
    cout<<"Input height and weight of rectangle: ";
    cin>>height>>weight;
}
void rectangle::getArea() {
    double area;
    area=height*weight;
    cout << "Area of rectangle = " << area << endl;
}
class isosceles:public area_c1 {
public:
    void getHtWt();
    void getArea();
};
void isosceles::getHtWt() {
    cout<<"Input height and weight of isosceles: ";
    cin>>height>>weight;
}

void isosceles::getArea() {
    double area;
    area=0.5*height*weight;
    cout << "Area of isosceles = " << area << endl;
}
int main() {
    rectangle r;
    isosceles s;
    r.getHtWt();
    s.getHtWt();
    r.getArea();
    s.getArea();
}