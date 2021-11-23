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
    public:
      Course();

      Course(string cname, int credits, string semester, vector<Student>students);

      void addStudent(Student &s);

      setCourse(string cname, string credits, string semester, vector<Student>students);
}