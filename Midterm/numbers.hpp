#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;

template <typename T>
class Numbers
{

private:
	int ID;
	vector<T> values;
	static int NumofObjects;

public:
	Numbers();
	Numbers(int i,int n);
	~Numbers();
	int getID();
	static int getNumObjects(void);
    int operator >(const Numbers& n);
	friend  void printNumbers(Numbers n);
	
};