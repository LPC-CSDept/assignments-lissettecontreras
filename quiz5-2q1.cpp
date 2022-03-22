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