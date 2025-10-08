#include <iostream>
using namespace std;

#define SIZE 10

class Stack {
    char stck[SIZE];
    int tos;

public:
  void init();
    void push(char ch);
    char pop();

};
void Stack::init() {
    tos=0;
}
void Stack::push(char ch) {
    if (tos==SIZE) {
        cout<<"stack is full"<<endl;
        return;
    }
    stck[tos]=ch;
    tos++;
}
char Stack::pop(){
    if (tos==0) {
        cout<<"stack is empty"<<endl;
        return 0;
    }
    tos--;
    return stck[tos];
}
int main() {

    Stack s1,s2;
    s1.init();
    s2.init();
    s1.push('a');
    s1.push('b');
    s1.push('c');
    s2.push('e');
    s2.push('f');
    s2.push('h');
    s2.push('i');

    for (int index=0;index<3;index++) {
        cout<<"Pop s1: "<<s1.pop()<<endl;
    }
    for (int index=0;index<4;index++) {
        cout<<"Pop s2: "<<s2.pop()<<endl;
    }



}