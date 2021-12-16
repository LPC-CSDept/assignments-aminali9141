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
        courses[j]=courses[j+1];
        courses[j+1]=temp;
      }
    }
  }     

}

Course binarySearchIterative(Course courses[],int count,int course_id)
{
  Course course;
    int left=0;
    int right=count-1;

    while (left <= right) 
    {
        int middle = left + (right - left) / 2;
        if (courses[middle].getID() == course_id)
            return courses[middle];
        if (courses[middle].getID() < course_id)
            left = middle + 1;
        else
        if (courses[middle].getID() > course_id)
            right = middle - 1;
    }
 
    course.setID(-1);
    return course;
}

int main() 
{
  Course courses[10];
  int count=10;
  cout<<"Loading courses.txt file..."<<endl;
  ifstream fin("courses.txt");
  int ID;
  string name;
  int credit;
  int course_id;

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

  //binary search iterative
  cout<<"\n*** Binary search iterative ***"<<endl;
  cout<<"\nEnter course id to find: ";
  cin>>course_id;

  Course course=binarySearchIterative(courses,count,course_id);
  cout<<endl;
  if (course.getID()==-1)
  {
    cout<<"Course id "<<course_id<<" not found"<<endl;
  }
  else
  {
    cout<<"Course id "<<course_id<<" found"<<endl<<endl;    
    cout<<course<<endl;
  }

  cout<<endl;

  return 0;
} 