#include "ProductionWorker.hpp"

ProductionWorker::ProductionWorker()
{

}

ProductionWorker::ProductionWorker(string name,int num,string date,int shift,double pay)
{

}

int ProductionWorker::getShift()
{
	return shift;
}

void ProductionWorker::setShift(int shift)
{
	this->shift=shift;
}

double ProductionWorker::getHourlyPay()
{
	return hourlyPay;
}

void ProductionWorker::setHourlyPay(double pay)
{
	this->hourlyPay = pay;
}


ostream& operator<<(ostream& out, const ProductionWorker& pWorker)
{
    out<<"Employee shift: "<<pWorker.shift<<endl;
    out<<"Employee hourly pay: "<<pWorker.hourlyPay<<endl;	

    return out;
}

