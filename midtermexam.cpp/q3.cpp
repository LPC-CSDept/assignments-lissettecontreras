#include <iostream>
#include <fstream>
#include <ctime>

using namespace std;

int num;
int getRdnum(){
    return rand()%50 + 1;
}

int isGreater(int n){
    if (n > num){
        num = n;
        return 1;
    }
    num = n;
    return 0;
}

int main(){
    srand(time(0));
    fstream file;
    int current;
    file.open("numbers.txt", ios::out);
    for (int i =0; i <10; i++){
        current = getRdnum();
        cout << current << " ";
        if (i ==0){
            num = current;
        } else {
            if (isGreater(current) == 1){
                file << current << " ";
            }
        }
    }
    file.close();
    return 0;
}