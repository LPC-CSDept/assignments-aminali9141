#ifndef NUMBERS_H
#define NUMBERS_H
#include <iostream>
#include <cstdlib>
#include <vector>
#include <ctime>

using namespace std;
class Numbers {
    private:
    int ID;
    vector <int> numbers;
    
    public:

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