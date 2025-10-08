/*correct the following code segment
class Car {
    string model;
public:
    Car(string m){model=m;}
    void display(){cout<<"Model: "<<model<<endl:}
};
int main() {
   Car car1;
   car1.display();
   return 0;
}*/
#include<iostream>
using namespace std;
class Car{
    string model;
public:
    Car(string m){this->model=m;}
    void display(){cout<<"Model: "<<this->model<<endl;}
};
int main() {
    Car car1("Toyota");
    car1.display();
    return 0;
}