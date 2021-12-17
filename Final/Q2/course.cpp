#include "course.hpp"
#include <iostream>
#include <string>

Course::Course(){
    ID=0;
    name="";
    credit=0;
}

Course::Course(int id, string name, int credit){
    ID = id;
    name = name;
    credit = credit;
}

int Course::getID(){
    return ID;
}

string Course::getName(){
    return name;
}

int Course::getCredit(){
    return credit;
}

void Course::setID(int id) {
    this->ID = id;
}   

void Course::setName(string name){
    this->name = name;
}

void Course::setCredit(int credit){
    this->credit = credit;
}

void Course::printCourse(){
    cout << ID << "\t" << name << "\t" << credit << endl;
}
 

bool Course::operator >(const Course& C)
{
    if (ID>C.ID)
    {
        return true;
    }

    return false;
}


bool Course::operator <=(const Course& C)
{
    if (ID<=C.ID)
    {
        return true;
    }

    return false;
}


ostream& operator<<(ostream& out, const Course& course)
{
    out<<"Course ID: "<<course.ID<<endl;
    out<<"Course Name: "<<course.name<<endl;
    out<<"Course Credits: "<<course.credit<<endl;
    return out;
}
