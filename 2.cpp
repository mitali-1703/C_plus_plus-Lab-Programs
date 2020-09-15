// Write a program to display factorial of a number using class.

#include<iostream>
using namespace std;

class f{
    int ft=1,n;
    public:
    void indata(){
        cout<<"Enter a no."<<endl;
        cin>>n;
    }
    void factorial(){
        
        for(int i=n;i>=1;i--){
            
            ft=ft*i;
        }
    }
    void show(){
        cout<<"The factorial of the no. is "<<ft<<endl;
    }
};
int main(){
    f a;
    a.indata();
    a.factorial();
    a.show();
    return 0;
}

// OUTPUT
// Enter a no.
// 6
// The factorial of the no. is 720