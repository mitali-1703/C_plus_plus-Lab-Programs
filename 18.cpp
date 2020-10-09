//Write a program to implement dynamic memory allocation using new operator and also 
//delete the allocated memory using delete operator.

#include<iostream>
using namespace std;
int main(){
    int *ptr1=NULL;
    ptr1=new int;
    float* ptr2=new float(299.121);
    int *ptr3=new int[28];
    *ptr1=28;
    cout<<"Value of pointer var1: "<<*ptr1<<endl;
    cout<<"Value of pointer var2: "<<*ptr2<<endl; 

if(!ptr3)
cout<<"Allocation of memory failed\n";
else
{
    for(int i=10;i<15;i++){
        ptr3[i]=i+1;
        cout<<"Value of store in block of memory: "<<ptr3[i]<<endl;
    }
}
delete ptr1,ptr2;
delete[] ptr3;
return 0;    
}

// OUTPUT
// Value of pointer var1: 28
// Value of pointer var2: 299.121
// Value of store in block of memory: 11
// Value of store in block of memory: 12
// Value of store in block of memory: 13
// Value of store in block of memory: 14
// Value of store in block of memory: 15