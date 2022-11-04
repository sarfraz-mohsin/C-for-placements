#include <iostream>
using namespace std;

int main()
{
    char vowels[5];
    int size = sizeof(vowels) / sizeof(vowels[0]);

    // for (int i = 0; i < size; i++)
    // {
    //     cin >> vowels[i];
    // }

    // for (int i = 0; i < size; i++)
    // {
    //     cout << vowels[i] << endl;
    // }

    // input in forEach loop
    for (char &ele : vowels)
    {
        cin >> ele;
    }

    for (char ele : vowels)
    {
        cout << ele;
    }

    return 0;
}