#include<iostream>
#include <ctime>

using namespace std;

int partition(int[],int,int);
void qsort(int[],int,int);
void printAll(int[],int);


int main() {
  
  const int SIZE = 7;

  cout << "The initialized fixed numbers are:" << endl;
  int numbers[SIZE] = {1, 8, 5, 9, 4, 3, 7};
  printAll(numbers, SIZE);
  cout << "The sorted fixed numbers are:" << endl;
  qsort(numbers, 0, SIZE - 1);
  printAll(numbers, SIZE);


  cout << "The random valued numbers are:" << endl;
  int numbers1[SIZE];
  srand(time(0));
  for (int i=0; i<SIZE; i++) {
    numbers1[i] = rand() % 20 + 1;
  }

  printAll(numbers1, SIZE);
  cout << "The sorted random numbers are:" << endl;
  qsort(numbers1, 0, SIZE - 1);
  printAll(numbers1, SIZE);

  return 0;
  
}

int partition (int num[], int first, int last) {
  
  int pivot = num[last]; 
  int i = -1;
  for (int j = 0; j < last; j++) { 
    if(num[j] < pivot) {
      i++; 
      std::swap(num[i], num[j]);
    }
  
  }
  
  swap(num[i + 1], num[last]);  // swaps into new positions
  
  return i + 1; // returns the new index
  
}

void qsort(int num[], int first, int last) {
  
  int pivot_index;
  if(first>= last) {
    return;
  }
  pivot_index = partition(num, first, last);
  qsort(num, first , pivot_index - 1);  // sorts left partition
  qsort(num, pivot_index + 1, last);   // sorts right partition 
}

void printAll(int num[], int N) {
  
  for (int i = 0;i<N;i++) {
    std::cout << num[i] << " ";
  }
  cout << endl;
}