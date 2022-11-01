#include <iostream>
using namespace std;

int main(){
    cout<<"Armstrong numbers between 1 - 500 are";
    for(int i=0; i<500; i++){
        int sum = 0;
        int t =i;
        while(t != 0){
            sum = sum + ((t%10)*(t%10)*(t%10));
            t /= 10;
        }

        if(sum == i){
            cout<<i<<"\n";
        }
    }

    return 0;
}