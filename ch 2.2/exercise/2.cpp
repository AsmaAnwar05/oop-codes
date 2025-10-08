#include<iostream>
#include<ctime>
using namespace std;

class T_and_d {
    time_t time;
public:
    T_and_d(time_t t);
    void showTime();
};
T_and_d:: T_and_d(time_t t) {
    time=t;
}
void T_and_d::showTime() {
    cout<<ctime(&time)<<endl;
}
int main() {
    time_t current;
    current= time(0);
    T_and_d t1(current);
    t1.showTime();

    return 0;

}
/*short reminder- time(0) → Returns the current time as a time_t value (the number of seconds
 from the January 1, 1970, 00:00:00 UTC). but we need human readable date and time.so
we use ctime(&t) → Converts time_t value into a human-readable date/time string.
'&time' is used because ctime() takes a pointer to time_t, not the value itself.*/