#include <iostream>
using namespace std;

int main()
{
    int weight;
    int distance;
    cout << "Enter weight of package: ";
    cin >> weight;
    if (weight <= 0 || weight > 20){
        cout << "\nIllegal weight" << endl;
        return 0;
    }
    cout << "Enter distance to be traveled: ";
    cin >> distance;
    if (distance < 10 || distance > 3000){
        cout << "\nIllegal distance" << endl;
        return 0;
    }
    if (weight <= 2){
        cout << "\nCharge: $" << (distance/500) * 1.10 << endl;
    }
    if (weight > 2 && weight <= 6){
        cout << "\nCharge: $" << (distance/500) * 2.20 << endl;
    }
    if (weight > 6 && weight <= 10){
        cout << "\nCharge: $" << (distance/500) * 3.70 << endl;
    }
    if (weight > 10 && weight <= 20){
        cout << "\nCharge: $" << (distance/500) * 4.80 << endl;
    }
    
}