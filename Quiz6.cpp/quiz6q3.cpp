#include <iostream>
#include <ctime>
using namespace std;

void getRandnum(int &n1, int &n2, int &n3){
    srand(time(0));
    n1 = rand();
    n2 = rand();
    n3 = rand();
}

int findMin(int n1, int n2, int n3){
    int min = n1;
    if (n2 < min){
        min = n2;
    }
    if (n3 < min){
        min = n3;
    }
    return min;
}

void printResult(int n1, int n2, int n3, int min){
    cout << "The smallest number out of [" << n1 << ", " << n2 << ", "
    << n3 << "] is " << min << endl;
}

int main(){
    int num1, num2, num3, min;

    getRandnum(num1, num2, num3);
    min = findMin(num1, num2, num3);
    printResult(num1, num2, num3, min);

    return 0;
}