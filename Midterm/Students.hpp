#include <iostream>
#include <fstream>

#include "Student.h"

class Students
{
private:
	const int N=10;
	vector<Student> students;
	void readStudents();
public:
	Students();
	void print_descending();

};