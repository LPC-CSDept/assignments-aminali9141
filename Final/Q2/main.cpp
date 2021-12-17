#include <iostream>
#include <fstream>

#include "course.hpp"
using namespace std;


int partition(Course courses[], int left, int right)
{
  Course pivot_item = courses[right];
  int l = left - 1;

  for (int j = left; j <= right- 1; j++)
  {
    if (courses[j] <= pivot_item)
    {

      Course temp;
      temp=courses[l+1];
      courses[l+1]=courses[j];
      courses[j]=temp;
      l++;

    }
  }

  l++; 
  Course temp;
  temp=courses[l];
  courses[l]=courses[right];
  courses[right]=temp;  

  return l;
}

//quick sort recursive
void qsort(Course courses[], int left, int right)
{
  if (left < right)
  {
    int partition_index = partition(courses, left,right);
    qsort(courses, left, partition_index - 1);
    qsort(courses, partition_index + 1, right);
  }
}


int binary_search(Course courses[],int count,int course_id)
{

  int left=0;
  int right=count-1;

  while (left <= right) 
  {
    int middle = left + (right - left) / 2;
    if (courses[middle].getID() == course_id)
      return middle;
    if (courses[middle].getID() < course_id)
      left = middle + 1;
    else
      if (courses[middle].getID() > course_id)
        right = middle - 1;
    }

    return -1;
  }


  int recursive_binary_search(Course courses[], int left, int right, int course_id)
  {
   if (right >= left)
   {
    int middle = left + (right - left)/2;

    if (courses[middle].getID() == course_id)  
      return middle;

    if (courses[middle].getID() < course_id) 
      return recursive_binary_search(courses, middle+1, right, course_id);
    
    return recursive_binary_search(courses, left, middle-1, course_id);

  }
  

  return -1;
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

  //quick sort recursive
  qsort(courses,0,count-1);
  cout<<"Quick Sort Done...."<<endl;

  //binary search iterative
  cout<<"\n*** Binary search iterative ***"<<endl<<endl;
  cout<<"*********************************************"<<endl;

  for (int i = 0; i < 10; ++i)
  {
    int course_id=rand()%15+100;
    cout<<"Find Course id "<<course_id<<endl;
    int course_index=binary_search(courses,count,course_id);
    cout<<endl;
    if (course_index==-1)
    {
      cout<<"Error: Course id "<<course_id<<" not found"<<endl;
    }
    else
    {
      cout<<"Course id "<<course_id<<" found"<<endl<<endl;    
      cout<<courses[course_index]<<endl;
    }
    cout<<"*********************************************"<<endl;
    cout<<endl;
  }

  cout<<"#########################################################"<<endl;
  cout<<"#########################################################"<<endl;

  //binary search recursive
  cout<<"\n*** Binary search recursive ***"<<endl<<endl;
  cout<<"*********************************************"<<endl;

  for (int i = 0; i < 10; ++i)
  {
    int course_id=rand()%15+100;
    cout<<"Find Course id "<<course_id<<endl;
    int course_index=recursive_binary_search(courses,0,count-1,course_id);
    cout<<endl;
    if (course_index==-1)
    {
      cout<<"Error: Course id "<<course_id<<" not found"<<endl;
    }
    else
    {
      cout<<"Course id "<<course_id<<" found"<<endl<<endl;    
      cout<<courses[course_index]<<endl;
    }
    cout<<"*********************************************"<<endl;
    cout<<endl;
  }


  return 0;
} 