#include <iostream>
#include<cstring>
using namespace std;

class   Inventory {
    char item[20];
    double cost;
    int on_hand;
public:
    Inventory(char *i, double c, int o) {
        strcpy(this->item, i); /*The name of array 'item' behaves like a fixed address, so we cannot
        assign a new pointer to it. That’s why we need to copy the characters one by one. For
        this reason, strcpy(item, i); is used.*/
        cost = c;
        on_hand = o;
    }
    void show();
};
void Inventory::show() {
    cout << this->item;
    cout<<": $"<<this->cost;
    cout<<" on hand: "<<this->on_hand;
}
int main() {
    Inventory ob("wrench", 4.95, 4);

    ob.show();
    return 0;
}