#include <iostream>
using namespace std;

class Truck;
class Car {
    int price;
    float speed;
public:
    Car(int p, float s) {
        price = p;
        speed = s;
    }
    float sp_greater(Truck t);
};
class Truck {
    float weight;
    float speed;
public:
    Truck(float wt, float sp) {
        weight = wt;
        speed = sp;
    }
    friend float Car::sp_greater(Truck t);

};

float Car::sp_greater(Truck t) {
    return speed-t.speed;
}
int main() {
    int value;
    Car c1(1000, 55 ), c2(100, 125 );
    Truck t1(10000, 55), t2(20000, 75 );
    cout<<"comparing c1 and t1"<<endl;
    value=c1.sp_greater(t1);
    if (value==0) {
        cout<<"car and truck speed is the same"<<endl;
    }
    else if (value<0){cout<<"Truck is faster"<<endl;}
    else{cout<<"Car is faster"<<endl;}

    cout<<"comparing c2 and t2"<<endl;
    value=c2.sp_greater(t2);
    if (value==0) {
        cout<<"car and truck speed is the same"<<endl;
    }
    else if (value<0){cout<<"Truck is faster"<<endl;}
    else{cout<<"Car is faster"<<endl;}

    return 0;
}