#include <iostream>
using namespace std;

class employee
{

    int id;
    static int count;

public:
    void setdata(void)
    {
        cout << "enter the id" << endl;
        cin >> id;

        count++;
    }
    void getdata(void)
    {
        cout << "the id of this employee is " << id << " and thi is employee number " << count << endl;
    }
};

// ---->  count is the static memeber of the class employee <----

int employee ::count = 10;

int main()
{
    employee shivam, prince, aku;
    // shivam.id=1;---> Can't do that because id and count is private <-----
    shivam.setdata();
    shivam.getdata();

    prince.setdata();
    prince.getdata();

    aku.setdata();
    aku.getdata();
}
