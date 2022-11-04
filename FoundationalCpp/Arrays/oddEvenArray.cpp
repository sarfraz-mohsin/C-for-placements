#include <iostream>
using namespace std;

int main()
{
    int array[] = {1, 2, 3, 4, 5};
    int even = 0, odd = 0;

    for (int i = 0; i < 5; i++)
    {
        if ((array[i] % 2) == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    cout << "No of odd nos is: " << odd << " and no of even nos is: " << even;

    return 0;
}