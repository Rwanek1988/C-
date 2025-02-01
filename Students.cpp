//Rocky Wanek
//April 15, 2023

#include <iostream>
#include <fstream>
#include <algorithm>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
	ifstream infile;
	ofstream outfile;
	double grade1, grade2, grade3, grade4, grade5, averagegrade, highestgrade;
	char lastname[11], firstname[11];
	infile.open("students.txt",ios::in);
	outfile.open("studentsout.txt",ios::out);
	if(!infile.is_open())
	{
		cout<<"Error opening input file"<< endl;
		system("PAUSE");
		exit(1);
	}
	if(!outfile.is_open())
	{
		cout <<"Error opening output file" << endl;
		system("PAUSE");
		exit(1);
	}
	infile >> firstname >> lastname >> grade1 >> grade2 >> grade3 >> grade4 >> grade5;
	while (!infile.eof())
	{
		averagegrade = (grade1 + grade2 + grade3 + grade4 +grade5) / 5;
		outfile << setiosflags(ios::fixed);
		outfile << setprecision(2);
		outfile << lastname << ", " << firstname << endl;
		outfile << "Grade Average: " << averagegrade << "%" << endl;
		infile >> firstname >> lastname >> grade1 >> grade2 >> grade3 >> grade4 >> grade5;
		if (averagegrade > highestgrade)
		{
			highestgrade = averagegrade;
		}
		
	}
	outfile << setiosflags(ios::fixed);
	outfile << setprecision(2);
	outfile << "The highest overall grade average is " << highestgrade << "%" << endl;
	infile.close();
	outfile.close();
	system ("PAUSE");
	return 0;
}
