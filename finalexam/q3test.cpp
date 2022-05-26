#include <iomanip>
#include <iostream>
using namespace std;

void subset(int* numbers1, int* numbers2, const int SIZE1, const int SIZE2){
    for (int i = 0; i < SIZE1; i++){
        bool flag = false;
        for (int j = 0; j <SIZE2; j++){
            if ((numbers1[i]) == numbers2[j]){
                flag = true;
                break;
            }
        }
        if (!flag){
            cout << "numbers1 is not a subset of numbers2" << endl;
            return;
        }
    }
    cout << "numbers1 is a subset of numbers2" << endl;
}

int main() {
    const int SIZE1=5;
    const int SIZE2=10;
    int numbers1[SIZE1] = {2, 3, 5, 9, 10};
    int numbers2[SIZE2] = {1, 2, 3, 5, 9, 10, 11, 13, 15, 17};

    subset(numbers1, numbers2, SIZE1, SIZE2);

    const int SIZE3=6;
    const int SIZE4=10;
    int numbers3[SIZE3] = {2, 3, 5, 8, 9, 12};
    int numbers4[SIZE4] = {1, 2, 3, 5, 9, 10, 11, 13, 15, 17};

    subset(numbers3, numbers4, SIZE3, SIZE4);
    return 0;
}

