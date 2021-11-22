#include "numbers.hpp"
#include <cstdlib>
#include <iostream>
#include <ctime>

int main()
{
  Numbers n1(5); 
  
  n1.setElement(); 
  n1.setElement(10,1); 
  n1.printNumbers(0); 
 
  cout<<"Size: "<<n1.getSize(); 
  cout<<"Index Value: "<<n1.getElement(1); 
  cout<<"Sum: "<<n1.getSum(); 
  cout<<"Average: "<<n1.getAvg()<<endl; 
  
  n1.bubbleSort(0); 
  n1.printNumbers(0); 
  n1.printNumbers(1); 
  
  n1.bubbleSort(1); 
  n1.printNumbers(0); 
 
  n1.clear(); 
}