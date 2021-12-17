#include <fstream>
#include "ProductionWorker.hpp"
using namespace std;


void printWorkers(ProductionWorker workers[],int count)
{
  for (int i = 0; i < count; ++i)
  {
    cout<<workers[i]<<endl<<endl;
  }
}

int main()
{
	ProductionWorker workers[10];
	int count=10;
	cout<<"Loading employees.txt file..."<<endl;
 	ifstream fin("employees.txt");
	string eName;
	int eNnumber;
	string hireDate;
	int shift;
	double hourlyPay;
 
  for (int i = 0; i < count; ++i)
  {
    fin>>eName;
    fin>>eNnumber;
    fin>>hireDate;
    fin>>shift;
    fin>>hourlyPay;
    workers[i].setEmployeeName(eName);
    workers[i].setEmployeeNumber(eNnumber);
    workers[i].setHireDate(hireDate);
    workers[i].setShift(shift);
    workers[i].setHourlyPay(hourlyPay);

  }  

  fin.close();


  cout<<"\nEmployee list \n"<<endl;
  printWorkers(workers,count);


	return 0;
}