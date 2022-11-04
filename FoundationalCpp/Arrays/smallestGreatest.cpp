#include <iostream>
using namespace std;

int main()
{
    int array[] = {12, 2, 3, 4, 1};
    int min = array[0], max = 0;

    for (int i = 0; i < 5; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
        else if (min > array[i])
        {
            min = array[i];
        }
    }

    int sum = max + min;
    cout << "the sum of the greatest and the smallest no. in the array is " << sum;

    return 0;
}