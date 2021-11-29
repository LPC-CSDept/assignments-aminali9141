#include <iostream>
#include <vector>

using namespace std;

class Student
{
private:
	int ID;
	string name;
	vector<int> scores;

public:
	Student();
	Student(int i,string n,int s1,int s2,int s3);

	int getID();
	int getScore1();
	int getScore2();
	int getScore3();
	int getTotal();

    int operator <(const Student& s);
	friend void printStudent(Student s);
	
};