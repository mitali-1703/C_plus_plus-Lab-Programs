//Write a program to implement constructor overloading.

#include<iostream>
using namespace std;

class A{
    int a;
    public:
    A(){
        a=9;
    }
    A(int x){
        a=x;
    }
    A(A &obj){
        a=obj.a;
    }
    void display(){
        cout<<"Value of object is "<<a<<endl;
    }
};
int main(){
    A p,q(23),r(q);
    p.display();
    q.display();
    r.display();
    return 0;
}

// OUTPUT
// Value of object is 9
// Value of object is 23
// Value of object is 23