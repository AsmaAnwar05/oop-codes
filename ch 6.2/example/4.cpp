#include<iostream>
using namespace std;

class Coord{
    int x;
    int y;
public:
    Coord() {
        x = 0;
        y = 0;
    }
    Coord(int x, int y) {
        this->x = x;
        this->y = y;
    }
Coord operator +(Coord &ob2)
{
    Coord temp;
    temp.x = this->x + ob2.x;
    temp.y = this->y + ob2.y;
        return temp;
}
    void get_xy(int &i, int &j) {
        i=this->x;
        j=this->y;
    }
};
int main() {
    int x,y;
    Coord o1(3,4), o2(4,5),o3;
    o3 = o1 + o2;
    o3.get_xy(x,y);
    cout << "Result of o1 + o2: "<<x<<" "<<y<<endl;

    return 0;
}
