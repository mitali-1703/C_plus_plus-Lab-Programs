// Define a class matrix and perform matrix operation.

#include <iostream>
using namespace std;
class matrix
{
    int i, j, k, A[2][3], B[2][3], C[2][3], D[2][3], sum = 0;

public:
    void in()
    {
        cout << "Enter the elements of matrix A" << endl;
        for (i = 1; i <= 2; i++)
        {
            for (j = 1; j <= 3; j++)
                cin >> A[i][j];
        }

        cout << "Enter the elements of matrix B" << endl;
        for (i = 1; i <= 2; i++)
        {
            for (j = 1; j <= 3; j++)
                cin >> B[i][j];
        }

        for (i = 1; i <= 2; i++)
        {
            for (j = 1; j <= 3; j++)
            {
                C[i][j] = A[i][j] + B[i][j];
            }
        }
    }
    void setdata();
    void display()
    {
        cout << "The matrix multiplication of A and B gives matrix D:" << endl;
        for (i = 1; i <= 2; i++)
        {
            for (j = 1; j <= 3; j++)
                cout << D[i][j] << " ";
            cout << endl;
        }
    };
    void show()
    {
        cout << "The matrix addition of A and B gives matrix C:" << endl;
        for (i = 1; i <= 2; i++)
        {
            for (j = 1; j <= 3; j++)
                cout << C[i][j] << " ";
            cout << endl;
        }
    }
};

void matrix::setdata()
{
    for (i = 1; i <= 2; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            for (k = 1; k <= 3; k++)
            {
                sum = sum + A[i][k] * B[k][j];
                D[i][j] = sum;
            }
        }
    }
}
int main()
{
    matrix k;
    k.in();
    k.show();
    k.setdata();
    k.display();
    return 0;
}

// OUTPUT
//     Enter the elements of matrix A
// 1
// 2
// 3
// 4
// 5
// 6
// Enter the elements of matrix B
// 1
// 2
// 3
// 4
// 5
// 6
// The matrix addition of A and B gives matrix C:
// 2 4 6
// 8 10 12
// The matrix multiplication of A and B gives matrix D:
// 15 39 243
// 108 165 243