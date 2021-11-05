#include "Numbers.cpp"
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int findMax(Numbers[]. int);
void deDup(Numbers &, Numbers &);

int main(){
srand(time(0));
const int N = 5;
Numbers numberset[] = {Numbers(1,3),Numbers(2,5),Numbers(3,10),Numbers(4,5),Numbers(5,3),}

 for (int i = 0; i < N; i++) {
    cout << "Set ID " << numberset[i].getID();
    numberset[i].printAll();
    cout << "\n";
  }
int id = findMax(numberset, N);

  cout << "The ID's max difference: " << id;
  cout << "The difference is " << numberset[id-1].getMax() - numberset[id-1].getMin() << endl;

  deDup(numberset[2], numberset[3]);
  cout << "ID 3 - ID 4";
  numberset[2].printAll();

  deDup(numberset[0], numberset[1]);
  cout << "ID 1 - ID 2\n";
  numberset[0].printAll();
}

int findMax(Numbers nums[], int size) {
  if(size > 5) {
    cout << "Error Larger number";
    throw -1;
  } else {
    int max = -1;
    int largeId = -1;
    for(int i = 0; i < size; i++) {
      int currentMax = nums[i].getMax() - nums[i].getMin();
      if(currMax > max) {
        max = currentMax;
        largeId = nums[i].getID();
      }
    }
    return largeId;
  }
}

void deDup(Numbers& firstSet, Numbers& secondSet) {
  for(int i = 0; i < secondSet.getSize()-1; i++) {
    firstSet.deleteElm(secondSet.getElm(i));
  }
}