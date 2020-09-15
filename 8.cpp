//Write a program to check whether a no. is Armstrong no. or not.

#include <iostream>
using namespace std;
int main()
{
    int n, temp, a, sum = 0;
    cout << "Enter a number" << endl;
    cin >> n;
    temp = n;
    while (n != 0)
    {
        a = n % 10;
        sum = sum + a * a * a;
        n = n / 10;
    }
    if (sum == temp)
    {
        cout << "No. is an Armstong no." << endl;
    }
    else
    {
        cout << "No. is not an Armstrong no." << endl;
    }
    return 0;
}

// OUTPUT
// Enter a number
// 370
// No. is an Armstong no.