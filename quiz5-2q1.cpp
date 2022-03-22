#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int randnumbers[5];
    srand(time(0));
    int rdnum;
    for (int i = 0; i <5; i++){
        rdnum = rand()%100;
        randnumbers[i] = rdnum;
    }
    cout << "The Generated Random Numbers: " << randnumbers[0];
    for (int i = 1; i <5; i++){
        cout << ", " << randnumbers[i];
    }
    int temp = 100;
    for (int c = 0; c < sizeof(randnumbers)/sizeof(randnumbers[0]); c++){
        if (randnumbers[c] < temp){
            temp = randnumbers[c];
        }
    }
    cout << "\nThe Minimum Value: " << temp << endl;
    return 0;
}