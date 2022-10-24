#include <iostream>
using namespace std;

int main(){
    int n, sum;
    sum = 0;
    cout<<"Enter the number upto where you need the sum of even numbers";
    cin>>n;

    for( int i = 0; i<=n; i++){
        if(i%2 == 0)
            sum += i;
        else
            continue;
    }

    cout<<"The sum of all the even numbers is : "<<sum;

    return 0;
}