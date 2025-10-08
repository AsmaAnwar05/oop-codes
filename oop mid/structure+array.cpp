#include<iostream>
using namespace std;

struct Student {
    string name;
    int roll;
    float mark[3];
    Student(string name, int roll, float mark[3]) {
        this->name = name;
        this->roll = roll;
        for (int i=0; i<3; i++) {
            this->mark[i] = mark[i];
        }
    }
        void display(){
        float avg=(mark[0]+mark[1]+mark[2])/3.0;
        cout<<"Student details of roll: "<<roll<<endl;
            cout<<"Name:"<<name<<endl;
            cout<<"Average Mark:"<<avg<<endl;
        }
};
int main() {
    float m1[3]={20, 22,24};
    float m2[3]={25,27,29};
    float m3[3]={30,32,34};
    Student s1("Asma", 53, m1);
    Student s2("Simran", 52, m2);
    Student s3("Sadia", 54, m3);
    s1.display();
    s2.display();
    s3.display();
}
