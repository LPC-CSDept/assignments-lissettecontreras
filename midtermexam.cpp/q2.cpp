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
            helper.push_back(to_string(avg));
            cout << "Student name: " << helper.at(0) << "\tScore 1: "
            << score1 << "\tScore 2: " << score2 << "\tSum: " << sum
            << "\tAvg: " << avg << endl;
            student_list.push_back(helper);
            helper.clear();
        }
        count++;
    }
    for (vector<string> i: student_list){
        if (stod(i.at(3)) > 80){
            count80++;
        }
    }
    cout << "The total number of students who has the average > 80: " <<
    count80 << " students" << endl;
    file.close();
    return 0;
}