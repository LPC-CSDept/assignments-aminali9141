#include <iostream>
#include "course.hpp"
#include <fstream>

using namespace std;

int main(){
    Course course[4];
    Course c;
    ifstream myfile("coursestudents.txt");
    myfile>>c;
    course[0] = c;
    myfile>>c;
    course[1];
    myfile>>c;
    course[2] = c;
    myfile>>c;
    course[3] = c;
    cout << c;
    return 0;
}