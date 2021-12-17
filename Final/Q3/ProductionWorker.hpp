#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H
#include "Employee.hpp"

class ProductionWorker:public Employee
{
private:
	int shift;
	double hourlyPay;
public:
	ProductionWorker();
	ProductionWorker(string,int,string,int,double);
	int getShift();
	void setShift(int);
	double getHourlyPay();
	void setHourlyPay(double);
};

#endif