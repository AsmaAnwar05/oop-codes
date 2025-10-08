# include <iostream>
# include <cstdlib>
using namespace std;
long mystrtoi ( const char *s, char ** end , int base = 10)
{
    return strtol (s, end , base );
}
int main ()
{
    char *s1 = " 2045576 ";
    char *p;
    cout << " When base is default: " << mystrtoi (s1 , &p) <<endl;
    cout << " Base 10: " << mystrtoi (s1 , &p, 10) <<endl;
    cout << " Base 16: " << mystrtoi (s1 , &p, 16) <<endl;
    return 0;
}