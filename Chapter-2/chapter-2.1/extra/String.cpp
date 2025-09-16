#include<iostream>
using namespace std;

class strtype{
    string p;
    int len;
    public:
    strtype(){
        this->p="";
        this->len=0;
    }
   
    void set(string ptr){
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
