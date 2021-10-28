#include "Student.hpp"
#include <iostream>

using namespace std;

string Student :: getSname() const{
    return sname;
} 

int Student::getSid() const
{
    return sid;
}

double Student :: getScores(int i) const
{
    return score[i];
}
double Student :: getAvg() const{
    return(score[0] + score[1] + score[2]) /3;
}
double Student :: getSum() const{
    return (score[0] + score[1] + score[2]);
}
void Student::setSid(int x)
{
    sid = x;
} 
void Student::setSname(string s)
{
    sname = s;
}
void Student::setScores(int idx, int value)
{
    score[idx] = value;
}
