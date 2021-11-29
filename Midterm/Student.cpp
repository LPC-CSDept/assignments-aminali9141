#include "Student.hpp"

	Student::Student()
	{
		ID=0;
	}

	Student::Student(int i,string n,int s1,int s2,int s3)
	{
		ID=i;
		name=n;
		scores.push_back(s1);
		scores.push_back(s2);
		scores.push_back(s3);
	}

	int Student::getID()
	{
		return ID;
	}

	int Student::getScore1()
	{
		return scores[0];
	}

	int Student::getScore2()
	{
		return scores[1];
	}

	int Student::getScore3()
	{
		return scores[2];
	}
	int Student::getTotal() const
	{
		return scores[0]+scores[1]+scores[2];
	}


    int Student::operator <(const Student& s)
    {
    	return getTotal()<s.getTotal();
    }

	void Student::printStudent()
	{
		cout<<"Name: "<<name<<", ID: "<<ID<<", Score1: "<<scores[0]<<", Score2: "<<scores[1]<<", Score3: "<<scores[2]<<", Total: "<<getTotal()<<endl;
	}

