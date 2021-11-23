#include <iostream>

using namespace std;

class Student {
    private:
    int id;
    string sname;
    char grade;
    double scores;


    public:
      Student() {}
      Student(int id, string sname, char grade, double scores);

      void setStudent(int id, string sname, char grade, double scores);
}