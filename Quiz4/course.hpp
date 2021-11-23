#include <iostream>
#include <vector>
#include "students.hpp"

using namespace std;
class Course {
    private:
    string cname;
    string credits;
    string semester;
    vector<Student> students;
    public:
      Course(){}

      Course(string cname, string credits, string semester, vector<Student>students) {
          this->cname = cname;
          this->credits = credits;
          this->semester = semester;
          this->students = students;
      }
}