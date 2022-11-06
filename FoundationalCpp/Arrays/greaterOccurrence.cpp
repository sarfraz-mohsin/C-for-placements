#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    int x, n, count = 0;
    cout << "Enter the size of array";
    cin >> n;

    cout << "Enter the elements in the array";
    for (int i = 0; i < n; i++)
    {
        int element;
        cin >> element;
        v.push_back(element);
    }

    cout << "Enter the element whose greater elements you want";
    cin >> x;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] > x)
        {
            count++;
        }
    }

    cout << "total numbers greater than : " << x << " is: " << count;

    return 0;
}