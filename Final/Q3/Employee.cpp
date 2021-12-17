#include "Employee.hpp"


Employee::Employee()
{

}

string Employee::getEmployeeName()
{
	return eName;
}

void Employee::setEmployeeName(string name)
{
	this->eName = name;
}

int Employee::getEmployeeNumber()
{
	return eNnumber;
}

void Employee::setEmployeeNumber(int num)
{
	this->eNnumber = num;
}

int Employee::getHireDate()
{
	return hireDate;
}

void Employee::setHireDate(int date)
{
	this->hireDate = date;
}



