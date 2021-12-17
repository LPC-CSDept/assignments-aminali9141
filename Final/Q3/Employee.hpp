#ifndef Employee_H
#define Employee_H

#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
	string eName;
	int eNnumber;
	int hireDate;

public:
	Employee();
	Employee(string,int,int);
	string getEmployeeName();
	void setEmployeeName(string);
	int getEmployeeNumber();
	void setEmployeeNumber(int);
	int getHireDate();
	void setHireDate(int);
};


#endif