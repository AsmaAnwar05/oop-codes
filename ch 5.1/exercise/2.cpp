#include<iostream>
#include<ctime>
using namespace std;

class Stopwatch {
    double elapse;
    clock_t st,end;
public:
    Stopwatch() {
        st=end=0;
    }
    Stopwatch(clock_t s) {
       st=s;
        end=0;
    };
    void start();
    void stop();
    void show();
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
    Stopwatch sw1(clock());
    sw.show();
    cout<<"input a number to delay"<<endl;
    cin>>num;
    sw1.stop();
    sw1.show();

    return 0;
}