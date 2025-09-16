#include<iostream>
using namespace std;

#define SIZE 100

class strtype{
    string p;
    int len;
    public:
    strtype(){
        this->p="";
        this->len=SIZE;
    }
   
    void set(string ptr){
        if(ptr.length()>=SIZE){
            cout<<"memory allocation failed"<<endl;
            return;
        }
        p=ptr;
       this-> len=ptr.length();
    }
    void show(){
        cout<<this->p<<"-length: "<<this->len<<endl;
        
    }
};
int main(){
    strtype s1;
    s1.set("This is test");
    s1.show();
}
