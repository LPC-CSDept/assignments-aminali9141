#include <iostream>
#include <fstream>
using namespace std;

const int MAX_LEN = 20;
const int NUM_SCORES = 3;
struct students {
    int sid;
    char sname[MAX_LEN];
    double scores[NUM_SCORES];
};

void bubbleSortbyID(students [], int);
int binarySearch(students [], int, int);
void makestudents(students [], int);
void printstudents(students [], int );

int main()
{
    const int N=10;
    students s[N];
    int target, foundidx;

    makestudents(s,N);
    cout << "Initial Student Struct Array \n";
    printstudents(s, N);
    bubbleSortbyID(s,N);
    cout << "After Sorting by ID \n";
    printstudents(s, N);

    cout << "Enter the student ID";
    cin >> target;
    foundidx = binarySearch(s,N,target);
    if(foundidx == -1)
    cout << "The student's ID " << target << " is not found \n";
    else
    {
        cout << "Student Name" << s[foundidx].sname << endl << " Scores";
        for (int i=0; i< NUM_SCORES; i++)
			cout << s[foundidx].scores[i] << "\t" ;
		cout << endl;
	}
	
}
void bubbleSortbyID(students s[], int N)
{
}
int binarySearch(students s[], int N, int target)
{
}

void makeStudents(students s[], int N)
{
	ifstream ifs;
	ifs.open("students8-6.txt");
	if ( ifs.fail())
	{
		cerr << "File Open Error\n";
		exit(0);
	}

	for(int i=0;i<N;i++)
	{
		ifs >> s[i].sid >> s[i].sname;
		for(int j=0; j<NUM_SCORES; j++)
			ifs >> s[i].scores[j] ;
		if ( ifs.fail() )
		{
			cerr << "File Read Error\n";
			exit(0);
		}
	}
}

void printStudents(students s[], int N)
{
	for(int i=0;i<N;i++)
	{
		cout << s[i].sid << "\t" << s[i].sname << "\t";
		for(int j=0; j<NUM_SCORES; j++)
			cout <<  s[i].scores[j] << "\t";
		cout << endl;
	}
	cout << "==== EOR === \n";
}