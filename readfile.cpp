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

int main()
{
  ifstream ifs;
	ofstream ofs;
  Student s[10];


	ifs.open("students.txt"); 
    ofs.open("students.bin" ); 


  int line_count = 0;
    std::string line;
    std::ifstream myfile("students.txt");

    while (std::getline(myfile, line))
        ++line_count;
    std::cout << "Number of lines in the file: " << line_count << "\n";

  

	for( int i=0; i < line_count; i++)
	{
		ifs >> s[i].id;
		ifs >> s[i].sname;
		ifs >> s[i].score[0];
		ifs >> s[i].score[1];
		s[i].sum = s[i].score[0] + s[i].score[1];
		s[i].avg = s[i].sum / 2;
	}


	for( int i=0;i< line_count; i++)
	{
		cout << s[i].id << "\t" ;
		cout << s[i].sname << "\t";
		cout << s[i].score[0] << " " << s[i].score[1] << "\t";
		cout << s[i].sum << " " << s[i].avg << endl;
	}



	for( int i=0;i< line_count; i++)
		ofs.write( (char *)&s, sizeof(s));


}