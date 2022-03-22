#include <iostream>
#include <fstream>
using namespace std;

int main () {
  ofstream myfile;
  int id;
  string name;
  string department;
  double salary;
  myfile.open ("employee.txt");
  int employees;
  cin >> employees;
  myfile << employees << endl;
  for (int i = 0; i < employees; i++){
      cin >> id >> name >> department >> salary;
      myfile << id << " " << name << " " << department << " " << salary << endl;
  }
  myfile.close();
  return 0;
}