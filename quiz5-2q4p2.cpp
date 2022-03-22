#include <iostream>
#include <fstream>
using namespace std;

int main () {
    ofstream myfile ("employee.txt");
    string line;
    cout << "ID\t\tName\t\tDepartment\t\tSalary" << endl;
    while (getline(myfile, line)){
        cout << line;
    }
    return 0
}