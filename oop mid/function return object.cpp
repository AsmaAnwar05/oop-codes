/***Question:**

Write a C++ program that demonstrates:

1. **Function overloading** in a class.
2. Returning objects from functions.
3. Handling both numeric and string inputs.

**Requirements:**

* Define a class `Samp` with private members: `num1`, `num2`, `sum`, and `name`.
* Implement two overloaded `set` functions:

  * `set(int n1, int n2)` to assign values to `num1` and `num2`, and compute their sum.
  * `set(string s)` to assign a value to `name`.
* Add two display functions:

  * `numShow()` to display `num1`, `num2`, and `sum`.
  * `nameShow()` to display `name`.
* Write two separate functions outside the class:

  * `numInput()` that takes two integers from the user, stores them in a `Samp` object, and returns it.
  * `nameInput()` that takes a string (possibly with spaces) from the user, stores it in a `Samp` object, and returns it. (*Hint: use `cin.ignore()` before `getline` to avoid newline issues.*)
* In `main()`, call both `numInput()` and `nameInput()`, then display their results.

**Expected Output Example:**

```
Enter two numbers: 10 20
Enter name: Asma Anwar
num1 = 10, num2 = 20, sum = 30
Name = Asma Anwar
```
*/

#include <iostream>
using namespace std;

class Samp {
    int num1, num2, sum;
    string name;
public:
    void set(int n1, int n2) {
        num1 = n1;
        num2 = n2;
        sum = num1 + num2;
    }
    void set(string s) {
        name = s;
    }//function overloading-- parameter type and parameter no different

    void numShow() {
        cout << "num1 = " << num1 << ", num2 = " << num2 << ", sum = " << sum << '\n';
    }   //for show value
    void nameShow() {
        cout << "Name = " << name << endl;
    }
};

// Function that returns object of type samp
Samp numInput() {
    int a, b;
    Samp n;
    cout<<"Enter two number"<<endl;
    cin>>a>>b;
    n.set(a, b);
    return n;        // <-- function returns object
}
Samp nameInput() {
    Samp nam;
    string nm;
    cout<<"Enter name"<<endl;
    cin.ignore();// to understand why use of this line scroll down in below and see comment line.
    getline(cin, nm);
    nam.set(nm);
    return nam;
}
int main() {
    Samp ob,ob2;

    ob = numInput();
    ob2 = nameInput();
    ob.numShow();
    ob2.nameShow();
    return 0;
}

/*When cin >> a >> b; is used, pressing Enter leaves a newline (\n) in the input buffer.
So, when getline(cin, nm); is called afterward, it reads that leftover newline and stops immediately, resulting in an empty string.
Adding cin.ignore(); before getline clears the buffer and fixes the issue.*/