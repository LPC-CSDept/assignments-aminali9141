#include <iostream>
#include <fstream>

#include "Course.hpp"
using namespace std;

int main() {
  Course courses[10];
  int count=10;
  ifstream fin("courses.txt");
  int ID;
  string name;
  int credit;

  for (int i = 0; i < count; ++i)
  {
    fin>>ID;
    fin>>name;
    fin>>credit;
    courses[i].setID(ID);
    courses[i].setName(name);
    courses[i].setCredit(credit);
  }  
  fin.close();


  return 0;
} 