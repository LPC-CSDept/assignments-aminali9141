#include "course.hpp"
#include <iostream>
#include <string>

Course::Course(){
    ID=0;
    name="";
    credit=0;
}

Course::~Course(int IDnum, string coursename, int totalcredit){
    ID = IDnum;
    name = coursename;
    credit = totalcredit;
}

int Course::GetID(){
    return ID;
}

string Course::getName(){
    return name;
}

int Course::getCredit(){
    return credit;
}

void Course::setID(int newID) {
    ID = newID;
}   

void Course::setName(string getName;){
    name = getName;
}

int Course::setCredit(int getCredits){
    credit = getCredits;
}

void Course::printAll(){
    cout << ID << "\t" << name << "\t" << credit << endl;
}
