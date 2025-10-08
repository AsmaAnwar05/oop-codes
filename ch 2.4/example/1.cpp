#include <iostream>
using namespace std;

class Student {
private:
    int roll;
public:
    Student(int r);
    int getRoll();
};
Student::Student(int r) {
    roll=r;
}
int Student::getRoll() {
    return roll;
}
int main() {
    Student s1(50);
    Student *rl;
    rl = &s1;
    cout<<"Value using object " << s1.getRoll()<<endl;
    cout <<"Roll using pointer " <<rl->getRoll();

    return 0;
}