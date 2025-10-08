#include <iostream>
using namespace std;

#define SIZE 10

class Stack {
    char stck[SIZE];
    int tos;

public:
    Stack(char c);
    void push(char ch);
    char pop();
    char stackName;

};
Stack::Stack(char c) {
    tos=0;
    stackName=c;
}
void Stack::push(char ch) {
    if (tos==SIZE) {
        cout<<"stack "<<stackName<<" is full"<<endl;
        return;
    }
    stck[tos]=ch;
    tos++;
}
char Stack::pop(){
    if (tos==0) {
        cout<<"stack "<<stackName<<" is empty"<<endl;
        return 0;
    }
    tos--;
    return stck[tos];
}
int main() {

    Stack s1('A'),s2('B');
    s1.push('a');
    s1.push('b');
    s1.push('c');
    s2.push('e');
    s2.push('f');
    s2.push('h');
    s2.push('i');

    for (int index=0;index<5;index++) {
        cout<<"Pop s1: "<<s1.pop()<<endl;
    }
    for (int index=0;index<5;index++) {
        cout<<"Pop s2: "<<s2.pop()<<endl;
    }

return 0;

}