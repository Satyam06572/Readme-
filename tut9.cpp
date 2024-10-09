#include <iostream>
using namespace std;
int main()
{
  // pointer array using FOR,WHILE OR DO WHILE

  int i = 0;
  int a = 0;

  int age[] = {2, 4, 6, 7, 9};

  //    ------->For------->

  for (int i = 0; i < 5; i++)
  {
    cout << "the age of " << i << " is " << age[i] << endl;
  }

  //    ------>While------>

  while (i < 5)
  {
    cout << age[i] << endl;
    i++;
  }

  //   -------->Do While------->

  do
  {
    cout << age[a] << endl;
    a++;
  } while (a < 5);

  //   array pointer

  int *p = age;
  cout << "the age of *p is " << *p << endl;
  cout << "the age of *(p+1) is " << *(p + 1) << endl;
  cout << "the age of *(p+2) is " << *(p + 2) << endl;
  cout << "the valu of *(p+3) is " << *(p + 3) << endl;
  cout << "the age of *(p+3) is " << *(p + 4) << endl;
  return 0;
}
