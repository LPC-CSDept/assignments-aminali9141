#include <iostream>
#include "course.hpp"

using namespace std;

int Course::NUM_COURSES=0;

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

void Course::setCourse(string cname, int credits, string semester, vector<Student> students) {
    this->cname = cname;
    this->credits = credits;
    this->semester = semester;
    this->students = students;
}

int Course::getCountOfCourses(){
    return Course::NUM_COURSES;
}
string Course::getCName(){
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
    course.getStudents().clear();
    for(int i = 0;i<n;i++){
        is >> id >> name  >> grade >> score;
        Student stu(id, name, grade, score);
        course.addStudent(stu);
    }
    course.setCourse(cname, credits, semester, course.getStudents());
    return is;
}

ostream& operator<<(ostream &os, Course& course) {
    os << course.getCName() << "\t" << course.getCredit() << "\t" << course.getSemester() << "\n";
    os << "Student ID \tName\t"  << "Grade\t" << "Score\n";
    vector<Student> stu = course.getStudents();
    for(int i = 0; i < stu.size(); i++){
        os << stu[i].getId() << "\t\t" << stu[i].getSName() << "\t" << stu[i].getGrade() << "\t" << stu[i].getScores() << "\n";
    } 
    return os;
}

