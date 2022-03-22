#include <iostream>
using namespace std;

int main()
{
    int N;
    int M;
    cout << "Enter your base number: ";
    cin >> N;
    cout << "\nEnter your exponent: ";
    cin >> M;

    if ((N > 0 && N < 10) && (M>=1 && M<=10)){
        cout << "\n" << N << " to the power number: ";
        int help = N;
        for (int i = 0; i <= M; i++){
            if (i == 0){
                cout << "1";
            }
            else if (i == 1){
                cout << ", " << N;
            }
            else{
            help *= N;
            cout << ", " <<  help;
            }
        cout << endl;
    }
    }

    return 0;
}