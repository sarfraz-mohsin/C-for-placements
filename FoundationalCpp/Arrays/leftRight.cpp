#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 6, 5, 7, 10, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int mid = size / 2;
    int firstHalf = false, secondHalf = false;

    for (int i = 0; i < mid; i++)
    {
        if (arr[i] < arr[mid])
        {
            firstHalf = true;
        }
        else
        {
            firstHalf = false;
            break;
        }
    }

    for (int i = mid + 1; i < size; i++)
    {
        if (arr[mid] < arr[i])
        {
            secondHalf = true;
        }
        else
        {
            secondHalf = false;
            break;
        }
    }

    if (firstHalf && secondHalf)
    {
        cout << arr[mid];
    }
    else
    {
        cout << "-1";
    }

    return 0;
}