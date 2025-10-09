#include <iostream>
using namespace std;
class Coord
{
    int x, y;
public :
Coord () { x=0; y=0; };
    Coord (int i, int j) {
        this->x=i;
        this->y=j;
    }
    void get_xy (int &i, int &j) {
        i=this->x;
        j=this->y;
    } //Here we use get function to get access private variable i,j through x,y
    Coord operator +( Coord ob2);
};
Coord Coord :: operator +( Coord ob2)
{
    Coord temp ;
    temp .x = this->x + ob2 .x;
    temp .y = this->y + ob2 .y;
    return temp ;
}
int main ()
{
    Coord o1 (10 , 10) , o2 (5 , 3) , o3;
    int x, y;
    o3 = o1 + o2; //here we just set value but we can't access provate attribute. so
    o3. get_xy (x, y);//get_xy function used to get access of private attribute
    cout << "(o1+o2) X: " << x << ", Y: " << y << "\n";
    return 0;
}