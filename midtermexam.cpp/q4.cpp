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
