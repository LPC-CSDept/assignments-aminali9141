#include <iostream>
#include "course.hpp"
#include <fstream>

using namespace std;

int main(){
  Course course[4];
  Course c1;
  Course c2;
  Course c3;
  Course c4;
  ifstream myfile ("coursestudents.txt");
  myfile>>course[0];
  cout<<course[0];
  cout << "\n-------------------------\n";
  myfile>>course[1];
  cout<<course[1];
  cout << "\n-------------------------\n";
  myfile>>course[2];
  cout<<course[2];
  cout << "\n-------------------------\n";
  myfile>>course[3];
  cout<<course[3];
  return 0;
}