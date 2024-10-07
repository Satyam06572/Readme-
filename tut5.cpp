#include<iostream>
using namespace std;


       // ----------->> union <<-----------

    union money
    {
        int rice;
        char car;
        float pound;
    };
int main ()
{
    
     union money m1;
    //   m1.rice=34;
    // //  m1.pounde=10;
    //      m1.car = 'c'; 
    //  cout<<m1.car;
     
         

          // ----------->> enum <<-----------

         
        enum meal {Breakfast,Lunch,Dinner};
        cout<<Breakfast<<endl;
        cout<<Lunch<<endl;
        cout<<Dinner<<endl;
        return 0;
     }