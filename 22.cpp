//WAP to show use of operator overloading of binary operator using member function. 

#include <iostream>
using namespace std;
class complex
{
private:
    float real;
    float imag;

public:
    void input()
    {
        cout << "Enter real part " << endl;
        cin >> real;
        cout << "Enter imaginary part  " << endl;
        cin >> imag;
    }
    complex operator+(complex obj)
    {
        complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }
    void output()
    {
        if (imag < 0)
        {
            cout << "Output is ";
            cout << real << imag << "i";
        }
        else
        {
            cout << "Output is ";
            cout << real << "+" << imag << "i";
        }
    }
};
int main()
{
    complex c1, c2, result;
    cout << "Enter fisrt complex number\n";
    c1.input();
    cout << "Enter second complex number\n";
    c2.input();

    result = c1 + c2; //result=c1.opertor+(c2)
    result.output();
    return 0;
}

/*
OUTPUT:
Enter fisrt complex number
Enter real part 
2.1
Enter imaginary part  
-5.2
Enter second complex number
Enter real part 
1
Enter imaginary part
2.2
Output is 3.1-3i
*/
