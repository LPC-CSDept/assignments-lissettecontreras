#include <iostream>
using namespace std;

int main()
{
    int begin;
    int end;
    int check = 0;
    cout << "Enter the range begin and end: ";
    cin >> begin >> end;
    if ((begin > 1 && begin < 100) && (end > 1 && end < 100)){
        cout << "\nPrime numbers " << begin << " to " << end << ": ";
        for (int i = begin; i <= end; i++){
            bool is_prime = true;
            for (int c = 2; c <= i/2; c++){
                if (i % c == 0){
                    is_prime = false;
                    break;
                }
            }
            if (is_prime && check == 0){
                cout << i;
                check++;
            } else if (is_prime){
                cout << ", " << i;
            }
        }
        cout << endl;
    }
    return 0;
}