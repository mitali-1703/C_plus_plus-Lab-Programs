//Write a program to print the term at nth position in fibonacci series using function.

#include<iostream>
using namespace std;

int main(){
    int fibonacci(int);
    int n;
    cout<<"Enter a no."<<endl;
    cin>>n;
    cout<<"The term at "<<n<<" position of fibonacci series is "<<fibonacci(n)<<endl;
    return 0;
}
int fibonacci(int k){
    if(k==0)
    return 0;
    if(k==1)
    return 1;
    return(fibonacci(k-1)+fibonacci(k-2));
}

// OUTPUT
// Enter a no.
// 2
// The term at 2 position of fibonacci series is 1




    