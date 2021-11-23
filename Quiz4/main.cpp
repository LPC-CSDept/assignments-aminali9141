#include <iostream>
#include "course.hpp"
#include <fstream>

using namespace std;

int main(){
    Course course[4];
    Course c1;
    Course c2;
    Course c3;
    Course c4;
    ifstream myfile("coursestudents.txt");
    myfile>>course[0];
    cout<<course[0];
    cout << c;
    cout<< "\n---------------------\n"
    course[1];
    myfile>>c;
    cout << c;
    cout<< "\n---------------------\n"
    course[2] = c;
    myfile>>c;
    cout << c;
    cout<< "\n---------------------\n"
    course[3] = c; 
    cout << c;
    cout << c;
    cout<< "\n---------------------\n"
    return 0;
}