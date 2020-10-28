//WAP to show the use of operator overloading of binary operator using friend function perform sum , sub ,
// multiplication.

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
    void print()
    {
        if (imag < 0)
        {
            cout << "Complex is " << real << imag << "i" << endl;
        }
        else
        {
            cout << "Complex is " << real << "+" << imag << "i" << endl;
        }
    }
    friend complex operator+(complex , complex);
    friend complex operator-(complex , complex);
    friend complex operator*(complex , complex);
};
complex operator+(complex obj1, complex obj2)
{
    complex temp;
    temp.real = obj1.real + obj2.real;
    temp.imag = obj1.imag + obj2.imag;
    return temp;
}
complex operator-(complex obj1, complex obj2)
{
    complex temp;
    temp.real = obj1.real - obj2.real;
    temp.imag = obj1.imag - obj2.imag;
    return temp;
}
complex operator*(complex obj1, complex obj2)
{
    complex temp;
    temp.real = (obj1.real * obj2.real) - (obj1.imag * obj2.imag);
    temp.imag = (obj1.real * obj2.imag) + (obj2.real * obj1.imag);
    return temp;
}
int main()
{
    complex c1, c2, c3, result, res, mul;
    cout << "Enter fisrt complex number\n";
    c1.input();
    c1.print();
    cout << "Enter second complex number\n";
    c2.input();
    c2.print();
    cout << "Enter third complex number\n";
    c3.input();
    c3.print();
    cout << "\nSum of three complex numbers is"
         << endl;
    res = c1 + c2 + c3; //result=(c1.opertor+(c2))+c3 => temp.operator+(c3)
    res.print();
    cout << "\nSubtraction of three complex numbers is"
         << endl;

    result = c1 - c2 - c3; //result=(c1.opertor-(c2))-c3 => temp.operator-(c3)
    result.print();

    cout << "\nMultiplication of three complex numbers is"
         << endl;
    mul = c1 * c2 * c3;
    mul.print();
    return 0;
}
/*
OUTPUT:
Enter fisrt complex number
Enter real part
-2
Enter imaginary part
4
Complex is -2+4i
Enter second complex number
Enter real part
0
Enter imaginary part
7
Complex is 0+7i
Enter third complex number
Enter real part
-3
Enter imaginary part
1
Complex is -3+1i
Sum of three complex numbers is

Complex is -5+12i
Subtraction of three complex numbers is

Complex is 1-4i
Multiplication of three complex numbers is

Complex is 98+14i
*/
