#include <iostream>
using namespace std;

class area_c1 {
public:
    double height;
    double weight;
};


class rectangle: public area_c1 {
public:
    rectangle(double h, double w);
    void getArea();
};

rectangle::rectangle(double h, double w) {
    height = h;
    weight = w;
}

void rectangle::getArea() {
    double area = height * weight;
    cout << "Area of Rectangle is " << area << endl;
}


class isosceles: public area_c1 {
public:
    isosceles(double h, double w);
    void getArea();
};

isosceles::isosceles(double h, double w) {
    height = h;
    weight = w;
}

void isosceles::getArea() {
    double area = 0.5 * height * weight;
    cout << "Area of isosceles = " << area << endl;
}


int main() {
    rectangle r(5, 7);
    r.getArea();

    isosceles i(6, 5);
    i.getArea();
}