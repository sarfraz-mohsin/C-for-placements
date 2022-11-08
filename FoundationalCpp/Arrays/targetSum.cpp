#include <iostream>
using namespace std;
int main()
{
    int x, pairs = 0, arr[] = {3, 4, 6, 7, 1};
    cout << "Enter the number whose sum target sum you want";
    cin >> x;

    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (arr[i] + arr[j] == x)
            {
                pairs++;
            }
        }
    }

    cout << "No. of pairs whose sum is equal to target num is: " << pairs;

    return 0;
}