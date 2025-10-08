//obj pass and return by value
/*Ques: Write a C++ program to demonstrate how an object can be passed to
 *a function and returned by value. Define a class with two numbers
 *and a sum, calculate the sum inside a function that takes an
 *object as a parameter, and return the updated object to the main
 *function.*/
#include <iostream>
using namespace std;

class Math {
    int num1, num2, sum;
public:
    Math() {
        num1 = 0;
        num2 = 0;
        sum = 0;
    }
    void setn1(int a) { num1 = a; }   //Set value of a,b
    void setn2(int b) { num2 = b; }

    int getA() { return num1; }
    int getB() { return num2; }     //Return value of a,b

    void show() {
        cout<< "Sum = "<< sum << endl;
    }

    void calculateSum() {         //Calculate sum of a and b
        sum = num1 + num2;
    }
};

//Function takes a Math object and returns a Math object
Math result(Math obj) {  //obj is a copy of the passed object (pass by value)
    obj.calculateSum();
    return obj;          // ← object is returned here. now this obj has value of sum
}

int main() {

    Math ob;

   ob.setn1(10);
    ob.setn2(20);
    cout << "1st value: " << ob.getA() << endl << "2nd value: " << ob.getB() << endl;
    // ← object is passed here (main ob → obj)
    // ← updated returned object is assigned back to ob2
    Math ob2 = result(ob);   //also function call
    cout<<"now value of num1 and num2 in ob"<<ob.getA()<<","<<ob.getB()<<endl;
    ob2.show();
    cout<<"But ob1 ";

    ob.show();
    //pass by value doesn't change value of 1st object .
    //it just create a copy of that object and work with that
}
