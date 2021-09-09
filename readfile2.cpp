#include <iostream>
#include <fstream>
using namespace std;

struct Student {
  int id;
  char sname[20];
  double score[2];
  double sum;
  double avg;
};

Student s[10];


void findStudent(Student *s)
  {
    int userInput;
    cout << "Enter a student ID or press 0 to quit: "; 
    cin >> userInput;

    while (userInput !=0) 
    {
      bool studentFound = false;
      for (int i =0; i <= sizeof(s) + 1; i++)
      {
        if (userInput == s[i].id)
        {
          cout << "ID: " << s[i].id << "\t";
          cout << "Name: " << s[i].sname << "\t";
          cout << "Score1: " << s[i].score[0] << "\t";
          cout << "Score2: " << s[i].score[1] << "\t";
          cout << "Sum: " << s[i].sum << "\t";
          cout << "Avg: " << s[i].avg << "\n";
          studentFound = true;
          break;
        
        }

      
      }

      if (studentFound == false){
      cout << "There is no student with ID: " << userInput << "\n";
      cout << "Enter another student ID or press 0 to quit: ";
      cin >> userInput;
      }
	
      else if (studentFound == true){
      cout << "Enter another student ID or press 0 to quit: ";
      cin >> userInput;
      }
    while(!cin) 
    {
        cout << "That was not a valid student ID!! Please enter an integer: ";
        cin.clear();
        cin.ignore();
        cin >> userInput;
    }

    }
    if (userInput == 0)
      cout << "Bye!" << endl;
  }



int main()  
{
	ifstream ifs;

	ifs.open("students.bin"); 

	ifs.read( (char *)&s, sizeof(s) ); 

  findStudent(s); 
  
  
}