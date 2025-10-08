#include<iostream>
#include<cstdio>
using namespace std;

class Date {
    int day, month, year;
    public:
    Date(char *str);
    Date(int m, int d, int y) {
        day=d;
        month=m;
        year=y;
    }
    void show() {
        cout<<month<<'/'<<day<<'/'<<year<<endl;
    }
};
Date::Date(char *str) {
    sscanf(str, "%d%*c%d%*c%d", &month, &day, &year);
}
int main() {
    Date idate(12,31,2025);
    Date sdate("12/31/2025");
    sdate.show();
    idate.show();

    return 0;
}
//%*c here * used to read a character and ignore that charecter.