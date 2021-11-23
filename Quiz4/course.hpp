#include <iostream>
#include <vector>
#include "student.hpp"

using namespace std;
class Course {
    private:
    string cname;
    int credits;
    string semester;
    vector<Student> students;

    static int NUM_COURSES;
    public:
      Course();

      Course(string cname, int credits, string semester, vector<Student>students);
      
      friend ostream& operator<< (ostream &os, const Course& n);
      friend istream& operator<< (istream &is,Course& n);

      void addStudent(Student &s);

      void setCourse(string cname, string credits, string semester, vector<Student>students);

      int getCountOfCourses();

      }
};

class Fraction{
    //rest is the same
};

ostream& operator<<(ostream &os, const Fraction& n)
