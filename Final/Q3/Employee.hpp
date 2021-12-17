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
	string hireDate;

public:
	Employee();
	Employee(string,int,string);
	string getEmployeeName();
	void setEmployeeName(string);
	int getEmployeeNumber();
	void setEmployeeNumber(int);
	string getHireDate();
	void setHireDate(string);
    friend ostream& operator<<(ostream& out, const Employee& emp);

};


#endif