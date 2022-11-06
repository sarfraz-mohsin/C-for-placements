#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    bool flag = true;
    cout << "Enter the size of array";
    cin >> n;

    cout << "Enter the elements of the array";
    for (int i = 0; i < n; i++)
    {
        int element;
        cin >> element;
        v.push_back(element);
    }

    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] <= v[i - 1])
        {
            flag = false;
            break;
        }
    }

    if (flag)
    {
        cout << "Your array is sorted";
    }
    else
    {
        cout << "Your array is not sorted";
    }

    return 0;
}