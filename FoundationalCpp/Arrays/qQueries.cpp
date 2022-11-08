#include <iostream>
#include <vector>
using namespace std;
int main()
{
    cout << "enter size";
    int n;
    cin >> n;

    vector<int> v(n);
    cout << "enter elements";
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }

    // Pre-processing
    const int N = 1e5 + 10; // Scintific notation to write 10 to the power 5 ;

    vector<int> freq(N, 0); // it will make an N size aray with all the elemets having 0 value

    for (int i = 0; i < n; i++)
    {
        freq[v[i]]++;
    }

    cout << "enter no queries: ";
    int q;
    cin >> q;

    cout << "enter query elements";
    while (q--)
    {
        int queryelement;
        cin >> queryelement;
        cout << freq[queryelement] << endl;
    }

    return 0;
}