#include <iostream>
using namespace std;

int main()
{
    int array[] = {10, 9, 8, 7, 6};
    int revArray[4];
    int index = 0;

    for (int i = 4; i >= 0; i--)
    {
        revArray[index] = array[i];
        index++;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << revArray[i];
    }

    return 0;
}