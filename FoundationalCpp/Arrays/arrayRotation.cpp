// #include <iostream>
// using namespace std;
// int main()
// {
//     int j = 0, n = 5, a[] = {5, 4, 3, 2, 1};
//     int b[5];

//     for (int i = n - 1; i >= 0; i--)
//     {
//         b[j] = a[i];
//         j++;
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << b[i];
//     }

//     return 0;
// }

// K-STEP ROTATION WITH EXTRA ARRAY

// #include <iostream>
// using namespace std;
// int main()
// {
//     int array[] = {1, 2, 3, 4, 5};
//     int result[5];
//     int k = 7;
//     int n = 5;

//     // k can be greater than n
//     k = k % n;
//     int j = 0;

//     // inserting last n-k elements
//     for (int i = n - k; i < n; i++)
//     {
//         result[j++] = array[i];
//     }

//     // inserting first n-k elements in answer array
//     for (int i = 0; i <= k; i++)
//     {
//         result[j++] = array[i];
//     }

//     // for printing the array
//     for (int i = 0; i < n; i++)
//     {
//         cout << result[i];
//     }

//     return 0;
// }

// K-STEP ROTATION WITHOUT EXTRA ARRAY

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    int k = 2;
    k = k % v.size();

    reverse(v.begin(), v.end());
    reverse(v.begin(), v.begin() + k);
    reverse(v.begin() + k, v.end());

    for (int a : v)
    {
        cout << a;
    }

    return 0;
}