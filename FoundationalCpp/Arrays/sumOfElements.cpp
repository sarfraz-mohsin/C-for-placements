#include <iostream>
using namespace std;

int main()
{
    int array[] = {3, 4, 10, 11};
    int sum = 0;

    for (int i = 0; i < 4; i++)
    {
        sum += array[i];
    }

    cout << sum;

    return 0;
}