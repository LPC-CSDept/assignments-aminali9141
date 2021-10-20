#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

struct Student{
    int StudentID, score[3], FinalScore;
    char Name[10];
    double avg;

    void printStudent(){
        cout << StudentID << " " << Name << " " << score[0] << " " << score[1] << " " << score[2] << " " << FinalScore << " " << avg << endl;
    }
};
int main()
{
    Student *ptr = nullptr;
    ptr = new Student;
    ifstream ifs;
    ifs.open("student.txt");
    
    while(ifs.read((char *)ptr, sizeof(*ptr)))
    {
        if (ptr->avg > 70){
            ptr->printStudent();
        }
    }
    return 0;
}