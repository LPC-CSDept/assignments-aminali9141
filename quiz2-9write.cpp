#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

struct Student{
    int StudentID;
    char StudentName[10];
    double score[3];
};
int main()
{
    Student *ptr = new Student;
    ifstream ifs;
    ifs.open("student.txt");
    ifs >> ptr->StudentID;
    ifs >> ptr->StudentName;
    ifs >> ptr->score[0];
    ifs >> ptr->score[1];
    ifs >> ptr->score[2];

    ofstream ofs;
    ofs.open("students.bin");
    ofs.write( (char *)&(*ptr), sizeof(*ptr));
}