#include <iostream>
#include "course.hpp"

using namespace std;

Course::Course() {
    Course::NUM_COURSES++;
}

Course::Course(string cname, int credits, string semseter,vector<Student> students) {
    this->cname = cname;
    this->credits = credits;
    this->semester = semester;
    this->students = students;
    NUM_COURSES++;
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
string Course::getCname(){
    return this->cname;
}
int Course::getCredit(){
    return this->credits;
}
string Course::getSemester(){
    return this->semester;
}
vector<Student> Course::getStudents(){
    return this->students;
}

istream& operator>>(istream &is, Course& course)
{
    string cname, semester;
    int credits;
    is >> cname>> credits>> semester;
    int n,id;
    double score;
    string name;
    char grade;
    is>>n;
    for(int i = 0;i<n;i++){
        is >> id >> name  >> grade >> score;
        Student stu(id, name, grade, score);
        course.getStudents().push_back(stu);
    }
    course.setCourse(cname, credits, semester, course.getStudents());
    return is;
}

