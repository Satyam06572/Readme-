// // ---------->function overloading<---------

#include <iostream>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}

int sum(int a, int b, int c)
{
    return a + b + c;
}

// volume of cube

int volume(int a)
{
    return a * a * a;
}

// volume of cylinder

float volume(double r, int h)
{
    return 3.14 * r * r * h;
}

int main()
{

    cout << "the sum of 3 and 3 is :" << sum(3, 3) << endl;
    cout << "the sum of 4 8 and 12 is :" << sum(4, 8, 12) << endl;
    cout << "the volume of cylinder of radius 3 and hight 4 is:" << volume(3, 4) << endl;
    cout << "the volume of cube 3 is :" << volume(3) << endl;
    return 0;
}