/*Write a c++ programme to implement a class named Triangle with a
 private data member base and height.include a default constructor,
 a parameterized constructor , and a destructor. Provide a public member function set_values()
 to modify base and height and implement function to calculate  and display the area of the triangle.
 In the main(0 function , create an object pointer to a Triangle object, display its base,height and area.
 modify the values using set-value(), and display the uploaded details.
 */#include<iostream>
using namespace std;

class Triangle {
    float base;
    float height;
    public:
    Triangle() {
        this->base=0.0;
        this->height=0.0;
    }
    Triangle(float b, float h) {
        this->base=b;
        this->height=h;
    }
    ~Triangle(){cout<<"Destructing"<<endl;}
    void set_value(float b, float h) {
        this->base=b;
        this->height=h;
    }
    void display() {
        cout<<"base="<<this->base<<" "<<"Height"<<this->height<<endl;
        float area= 0.5*this->base*this->height;
        cout << "Area is "<< area << endl;
    }

};
int main() {
    Triangle *p;
    p=new Triangle(3.0,2.0);
    cout<<"Before modify: "<<endl;
    p->display();
    p->set_value(3.0,4.0);
    cout<<"After modify: "<<endl;
    p->display();

    delete p;
    return 0;
}