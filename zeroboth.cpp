# include <iostream>
using namespace std;

/*
Implement a void function called zeroBoth that has two call-by-reference parameters,
both of which are variables of type int

sets the values of both variables to 0.
*/

void zeroBoth(int &bo, int &th){
    bo = 0;
    th = 0;
}

int main (){
    int num1, num2;

    // testing zeroBoth withough assignning num1 and num2
    zeroBoth(num1, num2);
    cout << num1 << " and " << num2 << endl;

    // changing num1 and num2 before testing zeroBoth again
    num1 = 2;
    num2 = 9;
    cout << num1 << " and " << num2 << endl;

    // testing zeroBoth after changing num1 and num2
    zeroBoth(num1, num2);
    cout << num1 << " and " << num2 << endl;

    return 0;
}
