#include <iostream>
using namespace std;

int main(){
    int n;
    cin >>n;
    int rev = 0;

    while(n>0){
        int temp = n%10;
        rev *= 10;
        rev += temp;
        n = n/10;
    }

    cout<<"The reverse of your number is : "<<rev;

    return 0;
}