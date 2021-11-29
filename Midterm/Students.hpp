#include <iostream>
#include <fstream>

#include "Student.hpp"

using namespace std;

class Students
{
private:
	const int N=10;
	const string filename="students.txt";
	vector<Student> students;
	void readStudents()
	{
		ifstream infile;
		int id,s1,s2,s3;
		string name;
		while(infile>>id>>name>>s1>>s2>>s3)
		{
			Student *temp=new Student(id,name,s1,s2,s3);
		}
		infile.close();
	}
	void sort_descending()
	{
		for (int i = 0; i < N-1; ++i)
		{
			for (int j = 0; j < N-i-1; ++j)
			{
				if (students[j]<students[j+1])
				{
					Student temp=students[j];
					students[j]=students[j+1];
					students[j+1]=temp;
				}
			}
		}
	}
public:
	Students();
	void print_descending();
	Student getStduentByID(int id);


};