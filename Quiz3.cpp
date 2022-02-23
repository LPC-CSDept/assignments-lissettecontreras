#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double x = rand();
    double y = rand();
    double z = rand();
    double sum = x + y + z;
    double average = sum / 3;
    cout << fixed << setprecision(5) << x << endl;
    cout << fixed << setprecision(5) << y << endl;
    cout << fixed << setprecision(5) << z << endl;
    cout << fixed << setprecision(5) << sum << endl;
    cout << fixed << setprecision(5) << average << endl;
}