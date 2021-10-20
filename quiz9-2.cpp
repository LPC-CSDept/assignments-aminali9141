#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    const int STUDENT_NAME = 10;
    const int STUDENT_SCORES = 2;
struct Student
{
    int id;
    char name[STUDENT_NAME];
    double scores[STUDENT_SCORES];
};

struct Student *std = new struct Student;
std::ifstream ofs("students.txt");
if(!ofs)
{
    std::cout << "Error" << std::endl;
    exit(0);
}
std::ofstream oft("students.bin", ios::binary);

while(ofs.eof()){
    ofs>>std->id;
    ofs>>std->name;
    for(int i =0; i<STUDENT_SCORES; i++){
        ofs>>std->scores[i];
    }
    oft.write (std::char*)&(*std), sizeof(*std);
}
ofs.close();
oft.close();
return 0;
}