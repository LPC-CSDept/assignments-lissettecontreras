#include <iostream>


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


