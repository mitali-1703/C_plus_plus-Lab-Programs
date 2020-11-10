//WAP to implement pure virtual function or abstract base class.

#include<iostream>
using namespace std;
class A{
    public:
    virtual void print()=0;
};
class B : public A{
    public:
    void print(){
        cout<<"This is class B"<<endl;
    }
};
int main(){
    A*ptr;
    B b1;
    ptr=&b1;
    ptr->print();
    return 0;
}

// OUTPUT
// This is class B