//WAP to overload relational operators i.e.(> and < operators).

#include <iostream>
using namespace std;
class Array
{
    int a[5];

public:
    void input()
    {
        cout << "Enter elements of array" << endl;
        for (int i = 0; i < 5; i++)
            cin >> a[i];
    }
    bool operator>(Array obj)
    {
        bool res;
        int i, sum1 = 0, sum2 = 0;
        for (i = 0; i < 5; i++)
        {
            sum1 = sum1 + a[i];
        }
        for (i = 0; i < 5; i++)
        {
            sum2 = sum2 + obj.a[i];
        }
        if (sum1 > sum2)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    Array a1, a2;
    a1.input();
    a2.input();
    if (a1 > a2)
    {
        cout << "First array is greater\n";
    }
    else
    {
        cout << "Second array is greater\n";
    }
    return 0;
}
/*OUTPUT
Enter elements of array
10
1
0
-1
0
Enter elements of array
1
2
12
0
-3
Second array is greater
*/