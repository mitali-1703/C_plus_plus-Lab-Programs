//Write a program to find volume of a cube using class.

#include<iostream>
using namespace std;
class c{
    int side,vol;
    public:
    void in(){
        cout<<"Enter the side of cube"<<endl;
        cin>>side;
    }
    void cube(){
        vol=side*side*side;
    }
    void show(){
        cout<<"The volume of the cube is "<<vol<<endl;
    }
};
int main(){
    c m;
    m.in();
    m.cube();
    m.show();
    return 0;
}

// OUTPUT
// Enter the side of cube
// 3
// The volume of the cube is 27