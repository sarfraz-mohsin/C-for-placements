#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of elements you want in the array";
    cin >> n;
    vector<int> v;
    int lastOccur;
    bool flag = false;

    cout << "Enter the elements in the array";
    for (int i = 0; i < n; i++)
    {
        int element;
        cin >> element;
        v.push_back(element);
    }

    cout << "Enter the number whose last occurrence you want to know";
    int m;
    cin >> m;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == m)
        {
            lastOccur = i;
            flag = true;
        }
    }

    if (flag)
    {
        cout << "The last occurrence of your element : " << m << " is present at " << lastOccur << " position";
    }
    else
    {
        cout << "Incorrect element, it is not present in the array";
    }

    /*Another approach for this could be traversing the array from the end

    //for(int = v.size()-1; i=0; i--){
        if(v[i]==m){
            lastOccurence = i;
            break;
        }
    }*/

    return 0;
}