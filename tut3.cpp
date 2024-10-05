// There is two type of header file
// * system header file: its come with compiler
#include<iostream>
// * user define header file: written by programer
// #include<shivam.h>
using namespace std;
int main()
{
    // arithmetic opertator

    int a=4,b=6;
    cout<<"the value of a+b is: "<<a+b<<endl;
    cout<<"the value of a-b is :"<<a-b<<endl;
    cout<<"the value of a*b is :"<<a*b<<endl;
    cout<<"the value of a/b is :"<<a/b<<endl;
    cout<<"the value of a%b is :"<<a%b<<endl;
    cout<<"the value of a++ is :"<<a++<<endl;
    cout<<"the value of a-- is :"<<a--<<endl;
    cout<<"the value of ++a is :"<<++a<<endl;
    cout<<"the value of --a is :"<<--a<<endl;

  // logical opertator

   cout<<"following are the logical operator :"<<endl;
   cout<<"the value of and operator ((a==b) && (a<b)) is: "<<((a==b) && (a<b))<<endl;
   cout<<"the value of or operator ((a>b) || (a<b)) is: "<<((a<b) || (a>b))<<endl;
   cout<<"ther value pf not operator(!(a==b)) is:"<<(!(a==b))<<endl; 
   return 0;
}


