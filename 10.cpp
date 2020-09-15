//write a program for swapping of numbers using call by reference.

#include<iostream>
using namespace std;
int main()
{
    void swap(int &, int &);
    int a, b;
    cout << "Enter 2 numbers" << endl;
    cin >> a >> b;
    cout << "The numbers before swapping are: " << a << "," << b << endl;
    swap(a, b);
    cout << "The numbers after swapping are: " << a << "," << b << endl;
    return 0;
}

void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

// OUTPUT
// Enter 2 numbers
// 34
// 76
// The numbers before swapping are: 34,76
// The numbers after swapping are: 76,34