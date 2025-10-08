#include<iostream>
#include<cstring>
using namespace std;

class Person {
    char name[20];
    int number;
    public:
    void set(char *nm, int nmbr) {
        strcpy(this->name,nm);
        this->number=nmbr;
    }
    void show() {
        cout<<"name: "<<name<<endl<<"number: "<<number<<endl;
    }
};

int main() {
    Person *p1;
    p1=new Person;
    if (!p1) {
        cout<<"Memory Error"<<endl;
        return 1;
    }
    p1->set("John", 962345323);
    p1->show();
    delete p1;
    return 0;
}