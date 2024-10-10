#include<iostream>
using namespace std;

        //   --------> CLASS PRIVATE AND PUBLIC <----------


class employee
{
    private:
    int a,b,c;

    public:
    int d,e;
    void setdata(int a1,int b1, int c1);
    void getdata()
    {
        cout<<"the value of a is:"<<a<<endl;
        cout<<"the value of b is:"<<b<<endl;
        cout<<"the value of c is:"<<c<<endl;
        cout<<"the value of d is:"<<d<<endl;
        cout<<"the value of e is:"<<e<<endl;

    }
};

void employee :: setdata(int a1, int b1,int c1){
    a = a1;
    b = b1;
    c = c1;
}


  
int main()
{
    employee shivam;
    shivam.d=999;
    shivam.e=100;
    shivam.setdata(22,33,54);
    shivam.getdata();

}