#include <iostream>
#include <vector>
#include "student.hpp"

using namespace std;
class Course {
    private:
    string cname;
    string credits;
    string semester;
    vector<Student> students;
    public:
      Course();

      Course(string cname, string credits, string semester, vector<Student>students);
}