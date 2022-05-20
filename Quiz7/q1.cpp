#include <iostream>
#include <cmath>

using namespace std;

void find_num(int* arr){
    for (unsigned int i = 1; i < 9; i++){
        if (abs(arr[i] - arr[i-1]) < 10 && abs(arr[i] - arr[i+1]) < 10){
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

int main(){
    int arr[10] = {1, 2, 3, 72, 79, 21, 23, 32, 100, 10000};

    find_num(arr);

    return 0;
}