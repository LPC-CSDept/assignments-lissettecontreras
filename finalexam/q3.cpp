#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    const int SIZE1=5;
    const int SIZE2=10;
    int numbers1[SIZE1] = {2, 3, 5, 9, 10};
    int numbers2[SIZE2] = {1, 2, 3, 5, 9, 10, 11, 13, 15, 17};

    for (int i = 0; i < SIZE1; i++){
        bool flag = false;
        for (int j = 0; j <SIZE2; j++){
            if ((numbers1[i]) == numbers2[j]){
                flag = true;
                break;
            }
       

