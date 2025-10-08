
#include<iostream>
using namespace std;

class person{

private:
    string name;
    int age;
public:
    person(string n,int a){name=n;age=a;}     //perameterize

    /*string getName(){return name;}       //getter part
    int getAge(){return age;}*/

    void show()           // show part
    {
        cout<<"Name="<<name<<"Age="<<age<<endl;
    }
};

int main()
{
    person p1("your name", 21);       //show part
    p1.show();


    /* person p1("shah rokan",23);      //getter part
     cout<<"Name="<<p1.getName()<<"Age="<<p1.getAge()<<endl;*/
}
