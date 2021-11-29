#include <iostream>
#include <vector>

using namespace std;

class Students
{
private:
	int ID;
	string name;
	vector<int> scores;
	static int NumofObjects;

public:
	Students();
	Students(int i,string n,int s1,int s2,int s3);

	int getScore1();
	int getScore2();
	int getScore3();

	static int getNumObjects(void);
    int operator >(const Students& s);
	friend void printStudent(Students n);
};