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
    courses[i]=new Course(ID,name,credit);
  }  
  fin.close();


  return 0;
} 