#include "Course.hpp"
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

ostream& operator<<(ostream& out, const Course& course)
{
    out<<"Course ID: "<<course.getID()<<endl;
    out<<"Course Name: "<<course.getName()<<endl;
    out<<"Course Credit: "<<course.getCredit()<<endl;
    return out;
}
