//Write a program to perform addition of private members of 3 classes using global friend function declaration.

#include<iostream>
using namespace std;

class B;
class C;
class A{
    int a;
    public:
    void set(int num1){
        a=num1;
    }
    friend void add(A,B,C);
};
class B{
    int b;
    public:
    void set(int num1){
        b=num1;
    }
    friend void add(A,B,C);
};
class C{
    int c;
    public:
    void set(int num1){
        c=num1;
    }
    friend void add(A,B,C);
};

void add(A o1,B o2,C o3){
    cout<<"Addition of data members of the three classes is "<<o1.a+o2.b+o3.c<<endl;
}
int main(){
    A a1;
    a1.set(3);
    B b1;
    b1.set(5);
    C c1;
    c1.set(7);
    add(a1,b1,c1);
    return 0;
}

// OUTPUT
// Addition of data members of the three classes is 150