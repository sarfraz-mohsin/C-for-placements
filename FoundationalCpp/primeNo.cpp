#include <iostream>
using namespace std;

int main(){
    int n, num;
    cout<<"Enter a number: ";
    cin>> n;

    for(int i=2; i<n; i++){
       if(n%i==0){
        cout<<"number is not prime";
        break;
       }
       else{
            cout<<"number is prime";
            break;
            }
    }




    return 0;
}