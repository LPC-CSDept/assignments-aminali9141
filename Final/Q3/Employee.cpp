#include "Employee.hpp"


Employee::Employee()
{
	this->eName = "";
	this->eNnumber = 0;
	this->hireDate = 0;

}

Employee::Employee(string name,int num,int date)
{
	this->eName = name;
	this->eNnumber = num;
	this->hireDate = date;

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



