#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;

    // for loop
    for (int i = 0; i < 5; i++)
    {
        int element;
        cin >> element;
        v.push_back(element); // We can do v[i] only when define the size of vector in initialization because without initialization the size of v[i] would be 0 and hence no data can be stored.
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    v.insert(v.begin() + 2, 6);

    // for each loop

    for (int ele : v)
    {
        cout << ele << " ";
    }

    cout << endl;

    v.erase(v.end() - 2);

    // while loop
    int idx = 0;
    while (v.size() > idx)
    {
        cout << v[idx++] << " ";
    }

    return 0;
}