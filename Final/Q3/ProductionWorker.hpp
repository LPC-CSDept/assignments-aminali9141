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
	friend bool operator >(const ProductionWorker& w1, const ProductionWorker& w2 );
	friend ostream& operator<<(ostream& out, const ProductionWorker& pWorker);

};

#endif