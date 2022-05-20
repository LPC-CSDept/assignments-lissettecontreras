#include <iostream>
using namespace std;

int findMax(int*, int, int);

int main()
{
    const int N = 10;
    int numbers[N] = {1, 5, 7, 2, 3, 1, 2, 10, 10, 11};
    
    cout << findMax(numbers, 0, N/2-1) << " " << findMax(numbers, N/2, N-1) << endl;
}

int findMax(int* numbers, int from, int to)
{
    int largest = 0;
    for (int i = from; i <= to; i++){
        if (numbers[i] > largest){
            largest = numbers[i];
        }
   }
   return largest;
}