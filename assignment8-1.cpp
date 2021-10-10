#include <iostream>
#include <algorithm> 
using namespace std;


int binarySearch(int [], int, int);



int main()
{
	const int N = 10;
	int number[N] = {10, 25, 30, 35, 40, 45, 55, 60, 65, 70 };
	int target = 35;
	int index;


	index = binarySearch(number, N, target );
	if ( index == -1) {
		cout << target << " was not found" << endl;
	} else {
		cout << target << " was found" << endl;
}
	return 0;
}

int binarySearch(int number[], int N, int target) {
	int first, last, mid;
	first = 0;
    last = N-1;
    
    while (first <= last) {
    mid = (first+last)/2;

    if (number[mid] == target) {
		return mid;
	} else if (number[mid] > target) {

    last = mid - 1;;
	} else {
		first = mid + 1;
	}
  }
  return -1;
} 