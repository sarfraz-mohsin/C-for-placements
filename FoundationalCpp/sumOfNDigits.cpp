#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum=0;

    while(n>0){
        int temp = n%10;
        sum += temp;
        n= n/10;
    }

    cout<<"The sum of the digits in your number is: "<<sum;

    return 0;
}