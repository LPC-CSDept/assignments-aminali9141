#include <iostream>
#include "14-4.hpp"
using namespace std;

int main()
{
  Numbers n1(10);

  Numbers n2(n1);
  
  printNumbers(n1);
  cout << "Largest number in n1: " <<n1.getMax();
  cout << endl;
  printNumbers(n2);
  cout << "Largest number in n2: " <<n2.getMax() << "\n";

  return 0;

}