#include<iostream>
using namespace std;
  

      // ----------->> structures <<-----------


struct employee
{
    int eId;
    char favchar;
    float salary;
};

int main()
{
    
   
    struct employee shivam;
     shivam.eId=1;
     shivam.salary=1000000;
     shivam.favchar= 'A';
     cout<<"the Id of shivam is : "<<shivam.eId<<endl;
     cout<<"the favchar of shivam is :"<<shivam.favchar<<endl;
     cout<<"the salary of shivam is :"<<shivam.salary<<endl;

}


