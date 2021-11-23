#include <iostream>
#include "course.hpp"

Course:Course() {}

Course::Course(string cname, string credits, string semseter,vector<Student> students) {
    this->cname = cname;
    this->credits = credits;
    this->semester = semester;
    this->students = students; 
}