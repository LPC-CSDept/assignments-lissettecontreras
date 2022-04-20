#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main(){
    vector<string> helper;
    vector<vector<string>> student_list;
    fstream file;
    file.open("students.txt",ios::in);
    string line;