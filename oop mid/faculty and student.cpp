/*You are required to implement two classes, Student and Faculty. The
Student class contains a private member studentID and a protected
 member name. Implement a parameterized constructor to set the value of
 studentID and name. The Faculty class has a member function Display,
 which takes an object of type Student as a parameter and is declared as a
 friend of the Student class, allowing it to access the private and protected
 members of Student. In the main function, create an object of Student and
 an object of Faculty. Use the Display function to output the values of the
 studentID and name of the Student object*/
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