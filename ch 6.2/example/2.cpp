/*The following program overloads the + operator relative to the coord class. This class
is used to maintain X, Y coordinates.*/
#include <iostream>
using namespace std;
class Coord
{
    int x, y;
public:
    Coord () {
        this->x=0;
        this->y=0;
    }
    Coord(int i, int j) {
        this->x=i;
        this->y=j;
    }
    void get_xy(int &i, int &j) {
        i=this->x;
        j=this->y;
    }
    Coord operator +(Coord ob2);
    Coord operator -(Coord ob2);
    Coord operator =(Coord ob2);
};

Coord Coord :: operator +(Coord ob2)
{
    Coord temp;
    temp.x = this->x + ob2.x;
    temp.y = this->y + ob2.y;
    return temp;
}

Coord Coord ::operator -(Coord ob2)
{
    Coord temp;
    temp.x = x - ob2.x;
    temp.y = y - ob2.y;
    return temp;
}

Coord Coord :: operator =(Coord ob2)
{
    this->x = ob2.x;
    this->y = ob2.y;
    return *this;
}
int main()
{
    Coord o1(10, 10), o2(5, 3), o3;
    int x, y;
    o3 = o1 + o2;
    o3.get_xy(x, y);
    cout << "(o1+o2) X: " << x << ", Y: " << y << endl;
    o3 = o1 - o2;
    o3.get_xy(x, y);
    cout << "(o1 -o2) X: " << x << ", Y: " << y << endl;
    o3 = o1;
    o3.get_xy(x, y);
    cout << "(o3=o1) X: " << x << ", Y: " << y << endl;
    return 0;
}
