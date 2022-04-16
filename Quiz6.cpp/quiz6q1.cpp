#include <iostream>
using namespace std;

void swapTwoValues(int &n1, int &n2)
{
    int temp = n1;
    n1 = n2;
    n2 = temp;
}

void swapTwoValues(float &f1, float &f2)
{
    float temp = f1;
    f1 = f2;
    f2 = temp;
}

int main()
{
    int num1 = 1;
    int num2 = 2;
    swapTwoValues(num1, num2);
    cout << num1 << " " << num2 << endl;

    float num3 = 1.1;
    float num4 = 2.2;
    swapTwoValues(num3, num4);
    cout << num3 << " " << num4 << endl;
    return 0;
}