#include <iostream>
#include <fstream>
#include <cstring>

const int MAX_LEN = 20;
const int NUM_SCORES = 3;

struct Students {
    int sid;
    char sname[MAX_LEN];
    double scores[NUM_SCORES];
};

Students *makeStudents(int);
void printStudents(Students * const, int);
void sortStudents(Students * const, int);

int main()
{
    const int N = 10;
    Students *ptr=nullptr;
    ptr = makeStudents(N);
    std::cout << "\nInitial File Contents\n";
    std::cout << "\n----------------------\n";
    printStudents(ptr,N);
    sortStudents(ptr, N);
    std::cout << "\n-Students sorted by overall scores:\n";
    std::cout << "\n--------------------------------\n";
    printStudents(ptr,N);
}
Students *makeStudents(int N)
{
    std::fstream file;
    Students *students = new Students [10];

    file.open("students.txt");

    for (int i=0;  i<N;i++){
        file >> students[i].sid >> students[i].sname >> students[i].scores[0] >> students[i].scores[1] >> students[i].scores[2];
    }
    return students;
}
void printStudents(Students * const students, int N){
   for (int i=0; i< N;i++){
       std::cout << students[i].sid << " " << students[i].sname << " " << students[i].scores[0] << " " << students[i].scores[0] << " " << students[i].scores[1] << " " << students[i].scores[2] << std::endl;
   }
   std::cout << "===================================" << std::endl;
}
void sortStudents(Students * const students, int N){
    for(int i=0; i<N-1;i++)
    {
        for(int j=0;j<N-i-1;j++)
        {
            int sum1,sum2;
            sum1=students[j].scores[0]+students[j].scores[1]+students[j].scores[2];
            sum2=students[j+1].scores[0]+students[j+1].scores[1]+students[j+1].scores[2];
            if (sum1 > sum2)
            std::swap(students[j], students[j+1]);
        }
    }
}