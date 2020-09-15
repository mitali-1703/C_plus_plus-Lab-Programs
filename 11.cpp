//Write a program to find the sum of array elements.

#include <iostream>
using namespace std;

int main()
{
    int n, arr[100], sum = 0;
    cout << "Enter no. of elements of array" << endl;
    cin >> n;
    cout << "Enter elements of array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
    }
    cout << "The sum of array elements is " << sum<<endl;
    return 0;
}

// OUTPUT
// Enter no. of elements of array
// 5
// Enter elements of array:
// 2
// 3
// 1
// 0
// 1
// The sum of array elements is 7