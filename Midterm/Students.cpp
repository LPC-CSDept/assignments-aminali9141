#include "Students.hpp"

	Students::Students()
	{
		readStudents();
		sort_descending();
	}

	void Students::print_descending()
	{

		cout<<"Print Descending: (By Total)"<<endl;
		for (int i = 0; i < N; ++i)
		{
			students[i]->printStudent();
		}
	}


	void Students::binarySearch()//binary search
	{
		sort_asc_by_id();

		int id;
		cout<<"\nEnter student id to search: ";
		cin>>id;
		cout<<endl;
		int l=0;
		int r=N-1;
		int mid;
		bool flag=false;
		while(l<=r)
		{
			mid=l+(r-l)/2;

			if (id==students[mid]->getID())
			{
				students[mid]->printStudent();
				flag=true;
				break;
			}
			if (students[mid]->getID()<id)
			{
				l=mid+1;
			}
			else
				r=mid-1;

		}

		if (!flag)
		{
			cout<<"Student not found..."<<endl;
		}

	}