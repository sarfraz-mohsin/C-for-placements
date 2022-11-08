#include <iostream>
using namespace std;
int main()
{
    int arr[] = {2, 3, 1, 3, 2, 4, 1};
    int size = 7;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                arr[i] = arr[j] = -1;
            }
        }
    }

    int uniqueNum = 0;

    for (int i = 0; i < 7; i++)
    {
        if (arr[i] > 0)
        {
            uniqueNum = arr[i];
        }
    }

    cout << uniqueNum;

    return 0;
}