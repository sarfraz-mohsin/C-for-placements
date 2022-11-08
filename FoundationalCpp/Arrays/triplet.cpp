#include <iostream>
using namespace std;
int main()
{
    // int targetSum, pairs = 0, arr[] = {3, 1, 2, 4, 0, 6};
    // cin >> targetSum;

    // for (int i = 0; i < 6; i++)
    // {
    //     for (int j = i + 1; j < 6; j++)
    //     {
    //         for (int k = j + 1; k < 6; k++)
    //         {
    //             if (arr[i] + arr[j] + arr[k] == targetSum)
    //             {
    //                 pairs++;
    //             }
    //         }
    //     }
    // }

    int uniqueNum, arr[] = {2, 3, 1, 3, 2, 4, 1};

    for (int i = 0; i < 7; i++)
    {
        for (int j = i + 1; j < 7; j++)
        {
            if (arr[i] == arr[j])
            {
                arr[i] = arr[j] = -1;
            }
        }
    }

    for (int i = 0; i < 7; i++)
    {
        if (arr[i] > 0)
        {
            uniqueNum = arr[i];
        }
    }

    cout << uniqueNum;

    // cout << pairs;
    return 0;
}