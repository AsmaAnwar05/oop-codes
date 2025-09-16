#include<iostream>
using namespace std;

class person{
    string name;
    int age;
    public:
        person(){name=" ";age=0;}   

        string getName(){return name;}
        int getAge(){return age;}

        void setName(string n){name=n;}
        void setAge(int a){age=a;}
};
int main()
{
  
    person p2;
    p2.setName("asma");
    p2.setAge(21);

cout<<"Name= "<<p2.getName()<<endl<<"Age= "<<p2.getAge()<<endl;
}
