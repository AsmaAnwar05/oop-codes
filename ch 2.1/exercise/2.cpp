#include<iostream>
#include<ctime>
using namespace std;

class Stopwatch {
    double elapse;
    clock_t st,end;
public:
    Stopwatch() {
       elapse=0;
    }
    void start();
    void stop();
    void show();
    ~Stopwatch() {
        show();
    }
};
void Stopwatch::start() {
    st=clock();
}
void Stopwatch::stop() {
    end=clock();
}
void Stopwatch::show(){
    elapse=(double)(end-st)/CLOCKS_PER_SEC;
    cout<<"elapsed time: "<<elapse<<endl;
}
int main() {
    int num;
    Stopwatch sw;
    sw.start();
    cout<<"input a number to delay"<<endl;
    cin>>num;
    sw.stop();
}