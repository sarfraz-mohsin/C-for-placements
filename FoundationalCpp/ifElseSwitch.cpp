// Hard Exercise

#include <iostream>
using namespace std;

int main(){
    int num1, num2, sum, sub, mul, div;
    char operation;
    cout<<"Enter two numbers\n";
    cin>>num1>>num2;
    cout<<"Enter the operation to be performed from given operations + , - , * , /\n";
    cin>>operation;

    switch (operation)
    {
    case '+':
        sum = num1 + num2;
        cout<<"The sum of given no.s is: "<<sum;
        break;
    
    case '-':
        sum = num1 - num2;
        cout<<"The subtraction of given no.s is: "<<sum;
        break;

    case '*':
        sum = num1 * num2;
        cout<<"The multiplication of given no.s is: "<<sum;
        break;

    case '/':
        sum = num1 / num2;
        cout<<"The division of given no.s is: "<<sum;
        break;
    
    default: "You have selected wrong operation";
        break;
    }

    return 0;
}