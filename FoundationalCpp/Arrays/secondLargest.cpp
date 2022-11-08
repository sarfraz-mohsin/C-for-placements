// #include <iostream>
// #include <climits>
// using namespace std;

// int largestElementIndex(int arr[], int size)
// {

//     int max = INT_MIN;
//     int maxIndex = -1;
//     for (int i = 1; i < size; i++)
//     {
//         if (arr[i] > max)
//         {
//             max = arr[i];
//             maxIndex = i;
//         }
//     }
//     return maxIndex;
// }

// int main()
// {
//     int n = 7, arr[] = {2, 3, 5, 7, 6, 1, 7};
//     int largestNumIndex = largestElementIndex(arr, n);
//     cout << arr[largestNumIndex] << endl;

//     int largestElement = arr[largestNumIndex];
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == largestElement)
//         {
//             arr[i] = -1;
//         }
//     }

//     int secondLargest = largestElementIndex(arr, n);
//     cout << arr[secondLargest];

//     return 0;
// }

// OPTIMISED SOLUTION

#include <iostream>
#include <climits>
using namespace std;

int largestNum(int arr[], int n)
{
    int max = INT_MIN;
    int secondMax = INT_MIN;
    int secondMaxIndex = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > secondMax && arr[i] != max)
        {
            secondMax = arr[i];
            secondMaxIndex = i;
        }
    }

    return secondMaxIndex;
}

int main()
{
    int n = 7, arr[] = {2, 3, 5, 7, 6, 1, 7};
    int secondLargestNumIndex = largestNum(arr, n);

    cout << arr[secondLargestNumIndex];

    return 0;
}