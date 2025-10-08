#include <iostream>
#include<cstdlib>
using namespace std;

class Array {
    int rsize, csize;
    int *arr;
    public:
    Array(int r,int c);
    int &put(int r, int c);
    int get(int i, int j);
};
Array::Array(int r,int c) {
    arr=new int(r*c);
    if (!arr) {
        cout<<"Memory allocation failure"<<endl;
        exit(1);
    }
    rsize=r;
    csize=c;
}
int &Array::put(int r, int c) {
    if (r<0||r>=rsize||c<0||c>=csize) {
        cout<<"Index out of bounds"<<endl;
        exit(1);
    }
    return arr[r*csize+c];
}
int Array::get(int r, int c) {
    if (r<0||r>=rsize||c<0||c>=csize) {
        cout<<"Index out of bounds"<<endl;
        exit(1);
    }
    return arr[r*csize+c];
}
int main() {
    int r,c;
    Array a(2, 3);

    for (r=0;r<2;r++) {
        for (c=0;c<3;c++) {
            a.put(r,c)=r+c;
        }
    }
    for (r=0;r<2;r++) {
        for (c=0;c<3;c++) {
            cout<<a.get(r,c)<<' ';
        }
    }
    a.put(4,4);

    return 0;

}