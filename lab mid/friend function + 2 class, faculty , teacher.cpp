#include<iostream>
using namespace std;

class Student;
class Faculty {
public:
    void display(Student s1);
};
class Student {
    int studentID;
    protected:
    string name;
    public:
    Student() {
        this->studentID = 0;
        this->name = "";
    }
    Student(string name, int studentID) {
        this->name = name;
        this->studentID = studentID;
    }
    friend void Faculty::display(Student s1);
};
void Faculty::display(Student s1) {
    cout<<"name: "<<s1.name<<endl;
    cout<<"Student Id: "<<s1.studentID<<endl;
}
int main() {
    Student s1("Asma", 103053);
    Faculty f1;
    f1.display(s1);
    return 0;
}