
#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;

class Numbers
{

private:
	int ID;
	vector<int> values;
	static int NumofObjects;

public:
	Numbers();
	Numbers(int i,int n);
	int getID();
	static int getNumObjects(void);
    int operator >(const Numbers& n);
	friend  void printNumbers(Numbers n);

};