#include <iostream>
using namespace std;

int main()
{
    int array[] = {12, 15, 18, 5, 9};
    int key;
    cin >> key;
    int value = false;

    for (int i = 0; i < 5; i++)
    {
        if (array[i] == key)
        {
            cout << "the number is present in array and it is present at position: " << i;
            value = true;
            break;
        }
    }

    if (!value)
    {
        cout << "the no is not in the array";
    }

    return 0;
}