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

bool operator >(const ProductionWorker& w1, const ProductionWorker& w2 )
{
	if (w1.hourlyPay>w2.hourlyPay)
	{
		return true;
	}
	return false;
}


ostream& operator<<(ostream& out, const ProductionWorker& pWorker)
{
	out<<(const Employee &)pWorker;
	if (pWorker.shift==1)
	{
	    out<<"Employee shift: "<<"day"<<endl;
	}
	else if (pWorker.shift==2)
	{
	    out<<"Employee shift: "<<"night"<<endl;
	}

    out<<"Employee hourly pay: "<<pWorker.hourlyPay<<endl;	

    return out;
}

