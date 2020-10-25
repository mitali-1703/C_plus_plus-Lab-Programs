//Write a program to demonstrate uanry operator overloading using increment and decrememt operators.

#include<iostream>
using namespace std;
class Count{
    int value;
    public:
    Count(){
        value=5;
    }
    void operator ++(){
        ++value;
    }
    void operator --(){
        --value;
    }
    void display(){
        cout<<"Increment Count: "<<value<<endl;
    }
    void show(){
        cout<<"Decrement Count: "<<value<<endl;
    }
};
int main(){
    Count count1;
    ++count1;
    count1.display();
    --count1;
    count1.show();
    return 0;
}

// OUTPUT
// Increment Count: 6
// Decrement Count: 5