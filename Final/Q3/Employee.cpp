#include "Employee.hpp"


Employee::Employee()
{
	this->eName = "";
	this->eNnumber = 0;
	this->hireDate = "";

}

Employee::Employee(string name,int num,string date)
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

string Employee::getHireDate()
{
	return hireDate;
}

void Employee::setHireDate(string date)
{
	this->hireDate = date;
}


ostream& operator<<(ostream& out, const Employee& emp)
{
    out<<"Employee name: "<<emp.eName<<endl;
    out<<"Employee number: "<<emp.eNnumber<<endl;
    out<<"Employee hire date: "<<emp.hireDate<<endl;
    return out;	
}
