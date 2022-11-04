#include <iostream>
using namespace std;

int main()
{
    int array[] = {3, 7, 9, 4};
    int max = 0;
    int size = sizeof(array) / sizeof(array[0]);

    for (int i = 0; i < size; i++)
    {
        if (max < array[i])
        {
            max = array[i];
        }
        else
        {
            continue;
        }
    }

    cout << max;

    return 0;
}