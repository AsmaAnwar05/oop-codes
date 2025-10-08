#include<iostream>
using namespace std;

class Square{
    int num;
public:
    Square(int n){num=n;}
    int get(){
        return num;}
};

int sqr_it(Square o)
{
    return o.get() * o.get();    //return  a integer value
}

int main()
{
    Square a(10);
    cout<<sqr_it(a)<<endl;

    return 0;
}