#include<iostream>
#include "student.hpp"

using namespace std;

      Student::Student() {}
      Student::Student(int id, string sname, char grade, double scores) {
        this->id = id;
        this->sname = sname;
        this->grade = grade;
        this->scores = scores;
      }

      void Student::setStudent(int id, string sname, char grade, double scores) {
        this->id = id;
        this->sname = sname;
        this->grade = grade;
        this->scores = scores;
      }

      int Student::getId() {
        return this->id;
      }      

      string Student::getSName() {
        return this->sname;
      } 

      char Student::getGrade() {
        return this->grade;
      }

      double Student::getScores() {
        return this->scores;
      }
      