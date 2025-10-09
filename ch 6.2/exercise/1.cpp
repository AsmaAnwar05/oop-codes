/*The following program overloads the + operator relative to the coord class. This class
is used to maintain X, Y coordinates.*/
#include<iostream>
using namespace std;
class Coord
{
    float x,y;
public:
    Coord () {
        this->x=0.0;
        this->y=0.0;
    }
    Coord(float i,float j) {
        this->x=i;
        this->y=j;
    }
    void get_xy(float &i,float &j) {
        i=this->x;
        j=this->y;
    }
    Coord operator*(Coord ob2){
        Coord temp;
        temp.x=this->x*ob2.x;
        temp.y=this->y*ob2.y;
        return temp;
    }
    Coord operator/(Coord ob2){
        Coord temp;
        temp.x =this->x/ob2.x;
        temp.y =this->y/ob2.y;
        return temp;
    }
};
int main()
{
    Coord o1(10,10), o2(5,3), o3;
    float x,y;
    o3=o1*o2;
    o3.get_xy(x,y);
    cout<<"(o1*o2) X: "<<x<<", Y: "<<y<<endl;
    o3=o1/o2;
    o3.get_xy(x,y);
    cout<<"(o1/o2) X: "<<x<<", Y: "<<y<<endl;
    return 0;
}
