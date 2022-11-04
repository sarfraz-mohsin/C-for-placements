#include <iostream>
using namespace std;

int main()
{
    int array[] = {1, 2, 3, 4};

    cout << sizeof(array) << endl;
    cout << sizeof(array) / sizeof(array[0]) << endl;

    int array2[4];

    cout << array2[0]; // garbage values
    cout << array2[1];
    cout << array2[2];
    cout << array2[3];

    return 0;
}