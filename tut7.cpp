#include<iostream>
using namespace std;
int main()
{


    // pointer ----> pointer is a data type which hold the adderess of other data type


int a =5;
int* b = &a;


// &----> address of opperator


cout<<"the address 0f a is "<<&a<<endl;
cout<<"the address of a is "<<b<<endl;



// *----> value at derefrence operator


cout<<"the value at address b is "<<*b<<endl;

return 0;
}

