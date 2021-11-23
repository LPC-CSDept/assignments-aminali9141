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

      void addStudent(Student &s);

      void setCourse(string cname, string credits, string semester, vector<Student>students);

      int getCountOfCourses();

      istream& operator >> (istream& is, Course& course){
        is>> course.cname>> course.credits>> course.semseter;
        int n,id;
        double score;
        string name;
        char grade;
        is>>n;
        for(int i=0;i<n;i++){
            is >> id >> name >> grade >> score;
            student = Student(id, name, grade, score);
            course.students.push_back(student);
        }
      }
}