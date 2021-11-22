#include "student.hpp"
#include <iostream>
#include <fstream>


void makeStudent(Student s[], int N);
void sortStudent(Student s[], int N);
void printStudent(Student s[], int N);



int main()
{
const int N = 10;
Student s[N];

makeStudent(s,N);
sortStudent(s,N);
printStudent(s,N);


}

void makeStudent(Student s[],int N){

  string sname;
  int id, month, day;
  DOB date;
  
  ifstream file;
  file.open("studentsDOB.txt");

  if (file.fail())
	{
		cerr << "Error";
		exit(0);
	}

	for(int i=0;i<N;i++)
	{
		file >> sname >> id >> month >> day;
    date.setDOB(month,day);
    s[i].setSname(sname);
    s[i].setID(id);
    s[i].setDOB(date);
  }
}
void sortStudent(Student s[], int N){
int i,j;
 for(i=0;i<N-1; i++)
      for(j=0;j < N-i-1; j++){
      if (s[j].getDOB().getMonth()> s[j+1].getDOB().getMonth()) 
      {
         swap(s[j], s[j+1]);  
      }
      else if (s[j].getDOB().getMonth() == s[j+1].getDOB().getMonth()) 
      if(s[j].getDOB().getDay() > s[j+1].getDOB().getDay()) 
      {
        swap(s[j], s[j+1]);  
      }
      }
}
void printStudent(Student s[], int N)
{
  for (int i = 0; i < N; i++)
  {
  DOB date;
  cout<< "Student Name: "<<s[i].getSname() <<endl;
  cout<< "Student ID: "<<s[i].getID() <<endl;
  date = s[i].getDOB();
  date.printDate();
  }
}