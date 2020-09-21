//Write a program to demonstrate inline function.

#include<iostream>
using namespace std;

inline int product(int a,int b){
    return(a*b);
}
int main(){
    int x,y;
    cout<<"Enter the value of x"<<endl;
    cin>>x;
    cout<<"Enter the value of y"<<endl;
    cin>>y;
    cout<<"Product of x and y is "<<product(x,y)<<endl;
    return 0;
}

// OUTPUT
// Enter the value of x
// 4
// Enter the value of y
// 2
// Product of x and y is 8