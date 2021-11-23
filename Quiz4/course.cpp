#include <iostream>
#include "course.hpp"

static int NUM_COURSES = 0;
Course::Course() {
    NUM_COURSES++;
}

Course::Course(string cname, string credits, string semseter,vector<Student> students) {
    this->cname = cname;
    this->credits = credits;
    this->semester = semester;
    this->students = students; 
}
void Course::addStudent(Student &s) {
    this->students.push_back(s);
}

void Course:::setCourse(string cname, int credits, string semester, vector<Student> students) {
    this->cname = cname;
    this->credits = credits;
    this->semester = semester;
    this->students = students;
}

int Course::getCountofCourses(){
    return Course::NUM_COURSES;
}
