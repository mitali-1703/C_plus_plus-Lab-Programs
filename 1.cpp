// Write a program to find maximum of 3 numbers using class.

#include<iostream>
using namespace std;
class Max{
    int a,b,c,l;
    public:
    void getdata(){
        cout<<"Enter 3 nos."<<endl;
        cin>>a>>b>>c;
    }
    void max(){
        l=(a>b?a>c?a:c:b>c?b:c);
    }
    void show(){
        cout<<"The maximum no. is "<<l<<endl;
    }
};

int main(){
    Max x;
    x.getdata();
    x.max();
    x.show();
    return 0;
}

// OUTPUT
// Enter 3 nos.
// 4
// 7
// 2
// The maximum no. is 7