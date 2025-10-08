#include <iostream>
using namespace std;

class MyClass {
    int roll, section;
public:
    MyClass(int rl, int sctn);
    void show();
};
MyClass::MyClass(int rl, int sctn) {
    cout<<"In consructor"<<endl;
    roll= rl;
    section= sctn;
}
void MyClass::show() {
    cout<<roll<<" "<<section<<endl;
}
int main() {
    MyClass asma(53, 02);
    asma.show();

    return 0;
}