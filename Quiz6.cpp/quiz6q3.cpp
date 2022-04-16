#include <iostream>
#include <ctime>
using namespace std;

void gerRandnum(int &n1, int &n2, int &n3);
{
  srand(time(0));
  n1 = rand();
  n2 = rand();
  n3 = rand();
}

int findMin(int n1, int n2, int n3)
{
    int min = n1;
    if (n2 < min)
    {
        min = n2;
    }
    if (n3 < min)
    {
        min = n3;
    }
    return min;
}
