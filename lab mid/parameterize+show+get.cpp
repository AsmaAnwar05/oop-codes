/*Write a C++ program to create a class Person with data members
 *name and age, include a default constructor and a parameterized
 *constructor, add getter functions and a show() function, and in
 *main() create one object with fixed values and another object
 *with user input, then display the details of both objects.*/
#include<iostream>
using namespace std;

class Person{
    string name;
    int age;
public:
    Person() {
        name="You typed no name";
        age=0;
    }
    Person(string n,int a){name=n;age=a;}     //perameterize

    string getName(){return name;}       //getter part
    int getAge(){return age;}

    void show()           // show part
    {
        cout<<"Name= "<<name<<", Age= "<<age<<endl;
    }
};

int main()
{
    Person p1("Your name", 21);       //show part
    p1.show();
    string nam;
    int ag;
    cout<<"Input your name and age:"<<endl;

    getline(cin,nam);
    cin >> ag;
    Person p2(nam,ag);      //getter part
     cout<<"Name="<<p2.getName()<<", Age="<<p2.getAge()<<endl;
}
