#include <iostream>
using namespace std;

#define SIZE 10

class Stack {
    char stck[SIZE];
    int tos;

public:
    Stack();
    void push(char ch);
    char pop();

};
Stack::Stack() {
    tos=0;
}
void Stack::push(char ch) {
    if (tos==SIZE-1) {
        cout<<"stack overflow"<<endl;
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
void showstack(Stack ob) {
    for (int index=0;index<4;index++) {
        cout<<"Pop s1: "<<ob.pop()<<endl;
    }
}
int main() {

    Stack s1;
    s1.push('a');
    s1.push('b');
    s1.push('c');
    s1.push('d');
    showstack(s1);

}