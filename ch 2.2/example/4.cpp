#include <iostream>
using namespace std;

class StudentInfo {
    string name;
    int roll, section;
public:
    StudentInfo(string nm, int rl, int sctn);
    void show();
};
StudentInfo::StudentInfo(string nm, int rl, int sctn) {
    cout<<"In consructor"<<endl;
    name=nm;
    roll= rl;
    section= sctn;
}
void StudentInfo::show() {
    cout<<"Roll and section of "<<name<<" student is "<<roll<<", "<<section<<endl;
}
int main() {
    string n;
    int r,s;
    cout<<"Enter name, roll and section of a student."<<endl;
    cin>>n>>r>>s;
   StudentInfo s1(n,r,s);
    s1.show();


    return 0;
}