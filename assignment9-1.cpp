#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    const int N = 10;
    double number[N] = {10.0, 15.2, 21.2, 10.5, 11.3, 12.51, 13.8, 14.7, 19.8, 20.0};
    double *ptr;

    for(int i=0; i< N; i++){
        ptr = number;
        cout << "The memory address of element (" << i << ") is: " << &ptr[i] << endl;
    }
    cout << endl;
    for(int i =0; i < N; i++){
        cout << "The element (" << i << ") of the array number contains; " << ptr[i] << endl;
    }
    return 0;
}