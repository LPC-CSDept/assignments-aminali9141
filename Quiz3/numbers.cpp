#include "numbers.hpp"
#include <iostream>

using namespace std;

Numbers::Numbers(){
    id = -1;
    numbers.reserve(0);
}
Numbers::Numbers(int setID, int size) {
    srand(time(0));
    
    id = setID;
    numbers.reserve(size);

    for(int i=0; i < size; i++){
        numbers.push_back((rand() % 99));
    }
}

int Numbers::getID() const{
    return id;
}
int Numbers::getSize() const{
    return numbers.size;
}
int Numbers::getElm(int index) const {
    if(index > numbers.size()-1){
        cout << "Error Index \n";
    } else {
        return numbers[i];
    }
    throw -1;
}
int Numbers::getMax(int index) const {
    if(number.size()-1){
        return numbres[0];
        cout << "Error No Numbers \n";
    } else {
        return numbers[i];
    } else{
        int max = numbers[0];
        for(int i=0; i< number.size( - 1; i++))
        int current = numbers[i];
        if(current > max) {
            max = current;
        }
    }
    throw -1;
}
int Numbers::getMin(int index) const {
    if(number.size() == 0){
        return numbres[0];
        cout << "Error No Numbers \n";
        throw -1;
    } else if {numbers.size() == 1 )
        return numbers[i];
    } else{
        int min = numbers[0];
        for(int i=0; i< number.size( - 1; i++))
        int current = numbers[i];
        if(current < min>) {
            min = current;
        }
    }
    throw -1;
}
int Numbers::getSum(int index) const {
    if(number.size() == 0){
        cout << "Error No Numbers \n";
        throw -1;
    } else if {numbers.size() == 1 )
        return numbers[0];
    } else{
        int sum = 0;
        for(int i=0; i< number.size() - 1; i++){
        sum += numbers[i]
        }
        return sum;
        
     }
    }
    throw -1;
}
void Numbers::deleteElm(int value) {
    vector<int>::iterator iter;
    for(iter = numbers.begin(); iter < numbers.end(); iter+) {
        if(*iter == value){
            numbers.erase(iter--);
        }
    }
}
void Numbers::addElm(int num) {
    numbers.push_back(num);
}
void Numbers::printAll() const {
    if(numbers.size() == 0){
        cout << "Error no number";
    } else {
        for(int i = 0; i < numbers.size()-1;i++){
            cout << numbers[i];
        }
    }
}



 