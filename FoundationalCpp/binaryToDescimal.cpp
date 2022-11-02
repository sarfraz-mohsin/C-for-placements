#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int sum =0;
    int power = 1;

    while(n > 0){
        int lastDigit = n%10;
        sum += lastDigit*power;
        n= n/10;
        power *= 2;
    }

    cout<<sum<<endl;
    return 0;
}