#include <iostream>
using namespace std;

int main()
{
    int array[4] = {1, 2, 3, 4};
    int size = sizeof(array) / sizeof(array[0]);

    // for loop
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << endl;
    }

    // forEach loop
    for (int ele : array)
    {
        cout << ele << endl;
    }

    // while loop
    int index = 0;
    while (index < size)
    {
        cout << array[index];
        index++;
    }

    return 0;
}