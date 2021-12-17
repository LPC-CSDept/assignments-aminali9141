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
	void setEmployeeName(string employeeName);
	void setEmployeeNumber(int);
	void setHireDate(int);
	string getEmployeeName();
	int getEmployeeNumber();
	int getHireDate();
};


#endif