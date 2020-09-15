//Write a program to develop a mini calculator using class.

#include<iostream>
using namespace std;
class s{
    int a,b,c,res;
    public:
    void in(){
        cout<<"Enter 2 nos."<<endl;
        cin>>b>>c;
        cout<<"Enter the operator"<<endl<<
        "1 for addition"<<endl<<
        "2 for subtraction"<<endl<<
        "3 for multiplication"<<endl<<
        "4 for division"<<endl<<
        "5 for modulus"<<endl;
        cin>>a;
    }
    void cal(){
        switch(a){
            case 1:res=b+c;
            break;
            case 2:res=b-c;
            break;
            case 3:res=b*c;
            break;
            case 4:res=b/c;
            break;
            case 5:res=b%c;
            break;
            default:"No such operation exist in this calculator";

        }
    }
    void display(){
        cout<<"The answer is "<<res<<endl;
    }
};

int main(){
    s k;
    k.in();
    k.cal();
    k.display();
    return 0;
}

// OUTPUT
// Enter 2 nos.
// 3
// 5
// Enter the operator
// 1 for addition
// 2 for subtraction
// 3 for multiplication
// 4 for division
// 5 for modulus
// 2
// The answer is -2