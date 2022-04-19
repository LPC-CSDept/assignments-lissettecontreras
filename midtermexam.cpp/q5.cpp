#include <iostream>
#include <fstream>

using namespace std;

int getInput(){
    int num;
    cin >> num;
    return num;
}
bool isSame(int n1, int n2){
    return (n1 == n2);
}
int intDivision(int n1, int n2){
    return n1/n2;
}
void fileWrite(fstream &file, int result){
    file << result << "\n";

}

int main()
{
    fstream file;
    file.open("question5.txt",ios::out);
    while(true){
        int n1 = getInput();
        int n2 = getInput();
        int result;
        if (isSame(n1, n2)){
            break;
        }