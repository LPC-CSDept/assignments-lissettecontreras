#include <iostream>
using namespace std;

int main()
{
    double meal_charge = 88.67;
    double tax = 6.75;
    double tip = 20;
    double total_bill;
    double tax_amount;

    tax_amount = meal_charge * tax * 0.01 ;
    total_bill = meal_charge + tax_amount; 
    total_bill = total_bill + (total_bill * 20 * 0.01)

    cout << "Original meal charge \t" << meal_charge << endl;
    cout << "Tax: \t\t " << tax_amount << endl;
    cout << "Tip: \t\t " << (total_bill * 20 * 0.01 ) << endl;

    cout << "Total bill is \t" << total_bill << endl;
}