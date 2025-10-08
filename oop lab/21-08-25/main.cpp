#include <iostream>

using namespace std;
class Truck;
class Car {
private:
    string model;
    double speed;

public:
    Car() {
        speed=0.0;
    }
    Car(string m, double s) {
        model=m;
       speed = s;

    }
    ~Car();
    void setModel(string m) {
        model=m;
    }
    void setSpeed(double s) {
        speed = s;
    }
    string getModel(){
        return model;
    }
    double getSpeed() {
        return speed;
    }
    friend void race(Truck t);

};
class Truck {
private:
    string model;
    double weight;

public:
    Truck() {
        weight=0.0;
    }
    Truck(string m, double w) {
        model=m;
        weight =w;
    }
    ~Truck();
};