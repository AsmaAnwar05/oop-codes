#include<iostream>
using namespace std;

class Varsity;
class Department {
    public:
    void print(Varsity var);
};
class Varsity {
    string name;
protected:
    string location;
public:
    Varsity(string name, string location) {
        this->name = name;
        this->location = location;
    }
    friend void Department:: print(Varsity var);
};
void Department::print(Varsity var) {
    cout<<"name: "<<var.name<<endl;
    cout<<"location: "<<var.location<<endl;
}
int main() {
    Varsity v1("BUBT", "Dhaka");
    Department d1;
    d1.print(v1);
}
