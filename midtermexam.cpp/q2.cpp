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
    int count = 0;
    int count80 = 0;
    while(file >> line){
        helper.push_back(line);
        if (count %3 == 2){
            int score1 = stoi(helper.at(1));
            int score2 = stoi(helper.at(2));
            int sum = score1 + score2;
            double avg = double(sum)/2;

