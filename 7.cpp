//Write a program to check whether a number is prime or not.

#include <iostream>
using namespace std;
int main()
{
    int n,i;
    cout << "Enter a number" << endl;
    cin >> n;
    for (i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
            break;
    }
    
    if (i == n)
    {
        cout << "No. is Prime" << endl;
    }
    else
     {
        cout << "No. is non-prime" << endl;
     }

    return 0;
}

// OUTPUT
// Enter a number
// 5
// No. is Prime