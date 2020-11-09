//WAP to implement virtual function or dynamic binding.

#include<iostream>
using namespace std;
class A{
    public:
    virtual void show(){
        cout<<"This is class A\n";
    }
    void print(){
        cout<<"Hello A\n";
    }
};
class B:public A{
    public:
    void show(){
        cout<<"This is class B\n";
    }
    void print(){
        cout<<"Hello B\n";
    }
};

int main(){
    A*ptr;
    B b1;
    ptr=&b1;
    ptr->show();
    ptr->print();
    return 0;
}

// OUTPUT
// This is class B
// Hello B