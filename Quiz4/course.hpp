#include <iostream>
#include <vector>
#include "student.hpp"
#include <string>

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
      

      friend istream& operator<< (istream &is,Course& n);

      void addStudent(Student &s);

      void setCourse(string cname, string credits, string semester, vector<Student>students);

      int getCountOfCourses();

      string getCName();
      int getCredit();
      string getSemester();
      vector<Student> getStudents();
      
};

istream& operator<<(istream &is,const Course& course);
{
    string cname, semester;
    int credits;
    is>>cname>>credits>>semester;
        int n, id;
        double score;
        string name;
        char grade;
        is>>n;
        for(int i=0;i<n;i++){
            is >> id >> name >> grade >> score;
            Student stu(id, name, grade, score);
            course.getStudents().push_back(stu);
        }
        course.setCourse(cname, credits, semester, course.getStudents());
        return is;
}


