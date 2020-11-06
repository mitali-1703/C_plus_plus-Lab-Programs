//Wap to implement virtual base class/hybrid inhritance/multipath inheritance or diamond-shaped inheritance.

#include<iostream>
using namespace std;
class A{
    public:
    int a;
    void set(int x){
        a=x;
    }
};
class B: virtual public A{
    public:
    int b;
    void in(int y){
        b=y;
    }
};
class C:public virtual A{
    public:
    int c;
    void input(int z){
        c=z;
    }
};
class D:public C,public B{
    int d;
    public:
    void setData(int w){
        d=w;
    }
    void getData(){
        cout<<"Value of a is "<<a<<endl;
        cout<<"Value of b is "<<b<<endl;
        cout<<"Value of c is "<<c<<endl;
        cout<<"Value of d is "<<d<<endl;
    }
};
int main(){
    D d1;
    d1.set(-8);
    d1.in(7);
    d1.input(0);
    d1.setData(1);
    d1.getData();
    return 0;
}

// OUTPUT
// Value of a is -8
// Value of b is 7
// Value of c is 0
// Value of d is 1