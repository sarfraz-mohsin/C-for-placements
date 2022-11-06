#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    int n, difference = 0;
    cout << "Enter the size of array";
    cin >> n;

    cout << "Enter the elements of the array";
    for (int i = 0; i < n; i++)
    {
        int element;
        cin >> element;
        v.push_back(element);
    }

    for (int i = 0; i < v.size(); i++)
    {
        if (i % 2 == 0)
        {
            difference += v[i];
        }
        else
        {
            difference -= v[i];
        }
    }

    cout << " The difference between the sum of odd and even indices is: " << difference;

    return 0;
}