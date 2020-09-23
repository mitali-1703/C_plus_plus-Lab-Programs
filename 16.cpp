//Write a program to perform addition of private members of 3 classes using member function of one class and 
//friend of other class. 

#include<iostream>
using namespace std;

class Y;
class X;
class Z{
    int c;
    public:
    void set(){
        c=9;
    }
    int add(X,Y);
};
  
class Y{
    int b;
    public:
    void set(){
        b=5;
    }
    friend int Z::add(X,Y);
};
class X{
    int a;
    public:
    void set(){
        a=2;
    }
    friend int Z::add(X,Y);
};
    
int Z::add(X o1,Y o2){
    return(o1.a + o2.b + c);
}

int main(){
    X x1;
    x1.set();
    Y y1;
    y1.set();
    Z z1;
    z1.set();
    cout<<"Sum is "<<z1.add(x1,y1)<<endl;
    return 0;
}

// OUTPUT
// Sum is 16