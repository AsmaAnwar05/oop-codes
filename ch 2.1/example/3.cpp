#include<iostream>
#include<ctime>
using namespace std;

class Timer {
    clock_t start;
public:
    Timer();
    ~Timer();
};
Timer::Timer() {
    start=clock();
}
Timer::~Timer() {
    clock_t end;
    end=clock();
    cout<<"Elapsed time: "<<(end-start)/CLOCKS_PER_SEC<<endl;
}
int main() {
    Timer obj;
    char ch;

    cout<<"Press a key, then click Enter.";
    cin>>ch;

    return 0;

}
