//Write a program that demonstrates default arguments in c++.

#include <iostream>
using namespace std;

int sum(int x, int y, int z = 0, int w = 8)
{
    return (x + y + z + w);
}
int main()
{
    int a, b, c, d;
    cout << sum(10, 30) << endl;
    cout << sum(2, 0, 4) << endl;
    cout << sum(1, 2, 3, 4) << endl;
    return 0;
}

// OUTPUT
// 48
// 14
// 10