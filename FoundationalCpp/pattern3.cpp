#include <iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"Enter the number of rows and columns in the rectangle";
    cin>>n>>m;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(i==1 || j==1 || i==n || j==m){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    return 0;
}