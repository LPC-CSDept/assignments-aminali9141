#include "Students.hpp"

	Students::Students()
	{
		readStudents();
	}

	void Students::print_descending()
	{
		//sort_descending();

		for (int i = 0; i < N; ++i)
		{
			students[i]->printStudent();
		}
	}


	Student Students::getStduentByID(int id)//binary search
	{
		Student temp;


		return temp;
	}