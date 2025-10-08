# include<iostream>
# include<cstdlib>
using namespace std;
class Array
{
    int *p;
    int size ;
public :
Array (int sz)
{
    p = new int[sz ];
    if (!p)
        exit (1) ;
    size = sz;
    cout << " Using normal constructor"<<endl;

    }
    ~ Array () {
    delete [] p;
}
    Array ( const Array &a);
    void put (int i, int j)
    {
        if(i >=0 && i< size )
            p[i] = j;
    }
    int get (int i)
    {
        return p[i];
    }
};
Array::Array (const Array &a)
{
    int i;
    size = a. size ;
    p = new int[a. size ];
    if (!p)
        exit (1) ;
    for (i=0; i<a. size ; i++)
        p[i] = a.p[i];
    cout << " Using copy constructor \n";
}
int main ()
{
    Array num (10) ;
    int i;

    for (i=0; i <10; i++)
        num .put (i, i);
    for (i=9; i >=0; i--)
        cout << num.get (i)<<" ";
    cout <<endl;
    Array x = num;
    for (i=0; i <10; i++)
        cout << x.get (i)<<" ";
    return 0;
}