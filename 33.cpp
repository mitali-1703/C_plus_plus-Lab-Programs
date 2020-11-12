//WAP to implement static binding.

#include<iostream>
using namespace std;
class A{
    public:
    void print(){
        cout<<"Hello class A"<<endl;
    }
};
class B : public A{
    public:
    void print(){
        cout<<"Hello class B"<<endl;
    }
};
int main(){
    B b1;
    A*ptr=&b1;   //Memory allocation on run time
    ptr->print();   //Static binding (On compilation time)
    return 0;
}

// OUTPUT
// Hello class A