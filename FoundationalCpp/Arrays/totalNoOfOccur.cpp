#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    int n, x, count = 0;
    cout << "Enter the lenght of array";
    cin >> n;

    cout << "Enter elements in the array";
    for (int i = 0; i < n; i++)
    {
        int element;
        cin >> element;
        v.push_back(element);
    }

    cout << "Enter the element whose occurence to be counted";
    cin >> x;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == x)
        {
            count++;
        }
    }

    cout << "your number : " << x << " has occurred " << count << " times";

    return 0;
}