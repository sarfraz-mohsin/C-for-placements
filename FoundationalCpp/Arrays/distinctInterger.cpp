#include <iostream>
using namespace std;

int val(int arr[], int n)
{
    int missing = -1;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int range_sum = ((n) * (n + 1)) / 2;
    missing = range_sum - sum;
    return missing;
}

int main()
{
    int arr[] = {3, 0, 1};
    int n = 3;
    cout << val(arr, n);
    return 0;
}