#include <iostream>

using namespace std;

int findMin(int [], int, int);
void printArray(int [], int);

int main()
{
    const int N = 10;
    int numbers[N] = {25, 10 , 15 ,30 ,35 ,40 ,45 ,55 ,20 ,50};
    int ids;

    printArray(numbers,N);

    for(int i=0;i<N-1,i++;)
{
    ids= findMin(numbers,N, i++);
        swap(numbers[i], numbers[ids]);
}

    printArray(numbers,N);
}

int findMin(int numbers[], int N, int ith)
{
    int min, ids, i;
    min = numbers[ith];
    for(i=ith;i<N;i++)
    {
        if (min>numbers[i] )
        {
            min= numbers[i];
            ids = i;
        }
    }
    return ids;
}

void printArray(int a[], int x)
{
    for(int i=0; i < x; i++)
    cout << a[i] << "\t";
 }
