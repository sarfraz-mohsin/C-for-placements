#include <iostream>
using namespace std;

int main(){

    //Example 1

    // for(int i=0; i<=15; i+=2){
    //     cout<<i<<" ";

    //     if(i & 1){
    //         continue;
    //     }

    //     i++;
    // }

    //Example 2

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(i+j ==10){
                break;
            }
            cout<<i<<" "<<endl;
        }
    }

    return 0;
}