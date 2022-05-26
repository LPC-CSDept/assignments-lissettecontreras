#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

const unsigned short N=5;
struct Scores{
      double sc[N];
      string grade;
};

struct Grade{
      string first;
      string last;
      string ssn;
      Scores score;
};

int main(){
    ifstream ff("grades.txt");
    fstream f;
    f.open("grades.bin", ios::out | ios::binary);
    string line;
    while (ff.good()){
        string fname;
        string lname;
        string ssn;
        double g1;
        double g2;
        double g3;
        double g4;
        double g5;
        string grade;
        ff >> line;
        stringstream contents(line);
        contents >> fname >> lname >> ssn >> g1 >> g2 >> g3 >> g4 >> g5 >> grade;
        Scores s{{g1, g2, g3, g4, g5}, grade};
        Grade g{fname, lname, ssn, s};
        f.write(reinterpret_cast<char*>(&g), sizeof(Grade));  