#include <iostream>
#include <ctime>

using namespace std;

int getRdnum(){
    return rand()%100 + 1;
}

int getRdnum(int n2){
    return rand()%(n2) + 1;
}

int getRdnum(int n1, int n2){
    return rand()%(n2 - n1 + 1) + n1;
}

int main()
{
    srand(time(0));
    cout << getRdnum() << endl;
    cout << getRdnum(10) << endl;
    cout << getRdnum(-1000, 1000) << endl;

    return 0;
}