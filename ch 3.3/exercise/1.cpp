#include <iostream>
using namespace std;

class Who {
    char name;
    public:
    Who(char nm);
    ~Who(){cout<<"Destroying who #"<<name<<"."<<endl;};
};
Who::Who(char nm) {
    name = nm;
    cout<<"Constructing who #"<<name<<"."<<endl;
}
Who another() {
    Who n2('b');
    return n2;
}
int main() {
    Who n1('a');
    another();
    return 0;
}
