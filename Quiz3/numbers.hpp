#ifndef NUMBERS_H
#define NUMBERS_H
#include <iostream>
#include <cstdlib>
#include <vector>
#include <ctime>

using namespace std;
class Numbers {
    private:
    int id;
    vector <int> numbers;
    
    public:
Numbers();
Numbers(int, int);
~Numbers();

int getID() const;      
int getSize() const;      
int getElm() const;      
int getMax() const;      
int getMin() const;      
int getSum() const;    
void deleteElm(int d);
void addElm(int);
void printAll() const;
} ;    
#endif     