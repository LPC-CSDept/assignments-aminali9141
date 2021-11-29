#include "Students.hpp"

	int Students::NumofObjects=0;

	Students::Students()
	{
		ID=0;
	}

	Students::Students(int i,string n,int s1,int s2,int s3)
	{
		ID=i;
		name=n;
		scores.push_back(s1);
		scores.push_back(s2);
		scores.push_back(s3);
	}

	int Students::getID()
	{
		return ID;
	}

	int Students::getScore1()
	{
		return scores[0];
	}

	int Students::getScore2()
	{
		return scores[1];
	}

	int Students::getScore3()
	{
		return scores[2];
	}

	int Students::getNumObjects(void);
    int Students::operator >(const Students& s);
	void printStudent(Students s);
