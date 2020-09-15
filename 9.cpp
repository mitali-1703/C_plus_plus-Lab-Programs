//Write a program to perform swapping of numbers using call by value.

#include <iostream>
using namespace std;
int main(){
    void swap(int ,int);
    int a,b;
    cout<<"Enter 2 numbers"<<endl;
    cin>>a>>b;
    cout<<"The numbers before swapping are: "<<a<<","<<b<<endl;
    swap(a,b);
    return 0;
}

void swap(int x,int y){
    int temp=x;
    x=y;
    y=temp;
    cout<<"The numbers after swapping are: "<<x<<","<<y<<endl;
}

// OUTPUT
// Enter 2 numbers
// 7
// 90
// The numbers before swapping are: 7,90
// The numbers after swapping are: 90,7

