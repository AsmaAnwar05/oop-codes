#include<iostream>
using namespace std;

class TaxCalculator {
    float income;
    float taxRate;
    public:
    TaxCalculator() {
        income = 0;
        taxRate = .15;
    }
    TaxCalculator(float income, float taxRate=.15) {
        this->income = income;
        this->taxRate = taxRate;
    }
    void calculateTax() {
        float tax= income * taxRate;
        cout<<"Tax: "<<tax<<endl;
    }
};
int main() {
    TaxCalculator t(1000);
    t.calculateTax();
    TaxCalculator tax(2000, .1);
    tax.calculateTax();
}