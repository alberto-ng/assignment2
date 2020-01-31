# include <iostream>
using namespace std;

/*
Implement a function called addTax.

The function addTax has two formal parameters:
    1. taxRate, expressed as a percent
    2. cost, cost of an item before tax.

The function returns the value (float) of cost so that it includes sales tax
*/

float addTax(float taxRate, float cost){
    // converts from percentage to decimal
    taxRate /= 100;
    // update the new cost
    cost += cost * taxRate;

    // return the new cost
    return cost;
}

int main (){
    float tax, origCost, newCost;

    // testing with positive rate
    tax = 5;
    origCost = 100;
    // store what was returned from addTax() to newCost
    newCost = addTax(tax, origCost);
    cout << "Tax: " << tax << "%" << endl;
    cout << "Start: " << origCost << ". End: " << newCost << "." << endl;

    // testing 0 tax
    tax = 0;
    origCost = 100;
    newCost = addTax(tax, origCost);
    cout << "Tax: " << tax << "%" << endl;
    cout << "Start: " << origCost << ". End: " << newCost << "." << endl;

    // testing with negative rate
    tax = -5;
    origCost = 100;
    newCost = addTax(tax, origCost);
    cout << "Tax: " << tax << "%" << endl;
    cout << "Start: " << origCost << ". End: " << newCost << "." << endl;

    return 0;
}
