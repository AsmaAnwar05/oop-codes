#include<iostream>
using namespace std;

class Stack{
    char *stck;
    int size;
    int tos;

public:
    Stack(int sz);
    ~Stack();
    void push(char ch);
    char pop();

};
Stack::Stack(int sz) {
    tos=0;
    stck=(char *)malloc(sz);
    if (!stck){
        cout<<"memory allocation failed"<<endl;
        exit(1);
    }
    size=sz;
}
Stack::~Stack() {
    free(stck);
}
void Stack::push(char ch) {
    if (tos==size) {
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

    Stack s1(3),s2(4);
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