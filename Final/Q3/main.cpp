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

  ProductionWorker temp=workers[0];
  for (int i = 1; i < count; ++i)
  {
  	if (workers[i]>temp)
  	{
  		temp=workers[i];
  	}
  }
  cout<<"\nEmployee who has highest hourly pay rate \n"<<endl;
  cout<<temp<<endl<<endl;
  ProductionWorker p1;
  ProductionWorker p2("John", 10001, "12/24/2021", 1, 20.0);
  ProductionWorker p3("Ali", 10005, "12/23/2022", 2, 30.0);

  cout<<"Testing > overload"<<endl<<endl;

  cout<<p1<<endl<<endl;
  cout<<p2<<endl<<endl;
  cout<<p3<<endl<<endl;

  cout<<"Comparing p1 and p2"<<endl;
  if (p1>p2)
  {
  	cout<<p1.getEmployeeName()<<" has highest hourly pay rate $"<<p1.getHourlyPay()<<endl;
  }
  else
  {
  	cout<<p2.getEmployeeName()<<" has highest hourly pay rate $"<<p2.getHourlyPay()<<endl;  	
  }

  cout<<"Comparing p2 and p3"<<endl;

  if (p2>p3)
  {
  	cout<<p2.getEmployeeName()<<" has highest hourly pay rate $"<<p2.getHourlyPay()<<endl;
  }
  else
  {
  	cout<<p3.getEmployeeName()<<" has highest hourly pay rate $"<<p3.getHourlyPay()<<endl;  	
  }
  

	return 0;
}