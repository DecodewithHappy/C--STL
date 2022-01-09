#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int a = 10, b = 20;
    cout << "Before Swap" << endl
         << a << " and " << b << endl;
    swap(a, b);
    cout << "After Swap" << endl
         << a << " and " << b << endl;

    // max and min func
    cout << max(a, b) << endl;
    cout << min(a, b) << endl;

    // add reverse func
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    reverse(arr, arr + 4);

    cout << "Reverse array" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}