#include <iostream>
using namespace std;

int main()
{
    int a[] = {5, 6, 10, 4, 9};
    int b[] = {1, 2, 3, 4, 5};
    int minA = a[0], minB = b[0];

    for (int i = 0; i < 5; i++)
    {
        if (minA > a[i])
        {
            minA = a[i];
        }
        if (minB > b[i])
        {
            minB = b[i];
        }
    }

    int sum = minA + minB;

    cout << "The sum of the two lowest nos. form a and b is : " << sum;

    return 0;
}