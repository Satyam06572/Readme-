#include <iostream>
using namespace std;

            // using ARRAY with CLASS
            
class shop
{
    int iteamId[50];
    int iteamprice[50];
    int counter;

public:
    void initcounter(void) { counter = 0; }
    void setprice(void);
    void displayprice(void);
};

void shop ::setprice(void)
{
    cout << "enter id of your item number" << counter + 1 << endl;
    cin >> iteamId[counter];
    cout << "enter pric of your item" << counter << endl;
    cin >> iteamprice[counter];
    counter++;
}
void shop ::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "the price of your iteam with id " << iteamId[i] << "is" << iteamprice[i] << endl;
    }
}
int main()
{
    shop dukaan;
    dukaan.initcounter();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.displayprice();

    return 0;
}