#include <cstring>
#include <iostream>
using namespace std;

class Card {
    char title[100];
    char author[100];
    int number;
    public:
    void store(char *t, char *a,int n);
    void show();
};
void Card::store(char *t, char *a, int n) {
    strcpy(title, a);
    strcpy(author, a);
    number = n;
}
void Card::show() {
    cout << "Book Title: " <<title<<endl;
    cout << "Author: " <<author<<endl;
    cout << "Number of copies: " << number<<endl<<endl;
}
int main() {
    Card b1, b2, b3;
    b1.store("Mathmatics", "xyz", 50);
    b2.store("Physics", "asaj", 60);
    b3.store("Engineering", "fdks", 70);
    b1.show();
    b2.show();
    b3.show();
}