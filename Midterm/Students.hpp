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
public:
	Students();
	void print_descending();
	Student getStduentByID(int id);


};