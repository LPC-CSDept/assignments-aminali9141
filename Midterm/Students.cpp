#include "Students.h"

	Students::Students()
	{
		readStudents();
	}

	void Students::print_descending()
	{
		for (int i = 0; i < N; ++i)
		{
			students[i].printStudent()
		}
	}


	Student Students::getStduentByID(int id)//binary search
	{
		
	}