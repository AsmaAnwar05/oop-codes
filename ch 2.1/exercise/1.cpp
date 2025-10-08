#include<iostream>
using namespace std;

#define SIZE 100

class Queue {
    int que[SIZE];
    int out, input;
public:
    Queue() {input=out=0;};
    void store(int num);
    int remove();
};

void Queue::store(int num) {
    if (input==out-1||(input==SIZE-1 && !out)) {
        cout<<"Queue is full"<<endl;
        return;
    }
    input++;
    if (input==SIZE) input=0;
    que[input]=num;
}
int Queue::remove() {
    if (out==input) {
        cout<<"Queue is empty"<<endl;
        return 0;
    }
    out++;
    if (out==SIZE)
        out=0;
    return que[out];
}
int main() {
    Queue ob1, ob2;
    for (int i=1; i<=10; i++) {
        ob1.store(i);
        ob2.store(i*i);
    }


    for (int i=1; i<=10; i++)
        cout<<"remove from queue 1: "<<ob1.remove()<<endl;

    for (int i=1; i<=10; i++)
        cout<<"remove from queue 2: "<<ob2.remove()<<endl;
}