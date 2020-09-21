//Write a program to perform addition,subtraction,multiplication and division of private data members of 
//two classes using friend function.   

#include<iostream>
using namespace std;

class B;
class A{
    int a;
    public:
    void set(int num1){
        a=num1;
    }
    friend void add(A,B);
    friend void subtract(A,B);
    friend void multiply(A,B);
    friend void divide(A,B);
};
class B{
    int b;
    public:
    void setdata(int num2){
        b=num2;
    }
    friend void add(A,B);
    friend void subtract(A,B);
    friend void multiply(A,B);
    friend void divide(A,B);
};
void add(A o1,B o2){
    cout<<"Sum of data members of classes is "<<o1.a+o2.b<<endl;
}
void subtract(A o1,B o2){
    cout<<"Subtraction of data members of classes is "<<o1.a-o2.b<<endl;
}
void multiply(A o1,B o2){
    cout<<"Multiplication of data members of classes is "<<o1.a*o2.b<<endl;
}
void divide(A o1,B o2){
    cout<<"Division of data members of classes is "<<o1.a/o2.b<<endl;
}

int main(){
    A a1;
    a1.set(8);
    B b1;
    b1.setdata(3);
    add(a1,b1);
    subtract(a1,b1);
    multiply(a1,b1);
    divide(a1,b1);
    return 0;
}

// OUTPUT
// Sum of data members of classes is 11
// Subtraction of data members of classes is 5
// Multiplication of data members of classes is 24
// Division of data members of classes is 2