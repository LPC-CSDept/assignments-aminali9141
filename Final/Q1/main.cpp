#include <iostream>
#include <fstream>

#include "Course.hpp"
using namespace std;

void bubbleSort(Course courses[],int count)
{

  for (int i = 0; i < count-1; i++)    
  {
    for (int j = 0; j < count-i-1; j++)
    {
      if (courses[j] > courses[j+1])
      {
        Course temp;
        temp=courses[j];
        courses[j]=temp;
      }
    }
  }     

}

int main() 
{
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

  //bubble sorting
  bubbleSort(courses,count);


  return 0;
} 