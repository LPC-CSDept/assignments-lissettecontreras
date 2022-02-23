#include <iostream>
using namespace std;

int main()
{
    double x = rand(), y = rand(), z = rand();
    double sum = x + y + z;
    double average = sum / 3;
    cout << setprecision(5) << x << endl;
    cout << setprecision(5) << y << endl;
    cout << setprecision(5) << z << endl;
    cout << setprecision(5) << sum << endl;
    cout << setprecision(5) << average << endl;
}