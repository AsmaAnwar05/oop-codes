#include <iostream>
using namespace std;

class Car;

class Truck {
    float weight;
    float speed;
    public:
    Truck(float wt, float sp) {
        weight = wt;
        speed = sp;
    }
    friend float sp_greater(Truck t, Car c);

};
class Car {
    int price;
    float speed;
    public:
    Car(int p, float s) {
        price = p;
        speed = s;
    }
    friend float sp_greater(Truck t, Car car);
};
float sp_greater(Truck t, Car c) {
   return t.speed-c.speed;
}
int main() {
    int value;
    Car c1(1000, 55 ), c2(100, 70 );
    Truck t1(10000, 55), t2(20000, 75 );
    cout<<"comparing c1 and t1"<<endl;
    value=sp_greater(t1, c1);
    if (value==0) {
        cout<<"car and truck speed is the same"<<endl;
    }
    else if (value<0){cout<<"car is faster"<<endl;}
    else{cout<<"Truck is faster"<<endl;}

    cout<<"comparing c2 and t2"<<endl;
    value=sp_greater(t2,c2);
    if (value==0) {
        cout<<"car and truck speed is the same"<<endl;
    }
    else if (value<0){cout<<"car is faster"<<endl;}
    else{cout<<"Truck is faster"<<endl;}

    return 0;
}