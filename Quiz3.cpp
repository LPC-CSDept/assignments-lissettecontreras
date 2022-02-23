#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
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