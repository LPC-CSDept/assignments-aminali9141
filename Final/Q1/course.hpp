#ifndef COURSE_H
#define COURSE_H
#include <string> 

using namespace std;
class Course {
    private:
    int ID;
    string name;
    int credit;

public: 
    Course();
    Course(int, string, int);

    int getID();
    string getName();
    int getCredit();

    void setID(int);
    void setName(string);
    void setCredit(int);
    void printCourse();

    bool operator >(const Course& C);
    friend ostream& operator<<(ostream& out, const Course& course);

    
};
#endif