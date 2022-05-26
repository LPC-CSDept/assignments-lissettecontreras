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
  