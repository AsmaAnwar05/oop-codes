#include<iostream>
using namespace std;

struct Employee {
    int id;
    string name;
    double basic_salary, DA, HRA, gross_salary;
    Employee() {
        id = 0;
        name = "None";
        basic_salary = 0.0;
        DA = 0.0;
        HRA = 0.0;
        gross_salary=0.0;
    }
    Employee(int id, string name, double basic_salary, double DA, double HRA) {
        this->id = id;
        this->name = name;
        this->basic_salary = basic_salary;
        this->DA = DA;
        this->HRA = HRA;
        this->gross_salary= basic_salary + HRA+DA;
    }
    void display() {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Basic Salary: " << basic_salary << endl;
        cout << "DA: " << DA << endl;
        cout << "HRA: " << HRA << endl;
        cout<< "Gross Salary: "<< gross_salary<< endl;
    }
};
int main() {
    Employee emp(12356, "Asma", 10000, 1000, 3000);
    cout<<"Details of employee"<<endl;
    emp.display();
    return 0;
}