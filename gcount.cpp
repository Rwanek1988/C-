//Rocky Wanek
//April 01, 2023

// This program accepts any number of grades for an exam with the numeric input referencing a letter grade. 
// Upon completion, the program outputs the number of grades in each category.

#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main() {
	
	int grades [5] = {};
	int enterGrade;


	cout << "4=A, 3=B, 2=C, D=1, 0=F" << endl;
	cout << "Enter the numeral value for the letter grade. Enter -1 when finished; " << endl;
	cin >> enterGrade;
	while (enterGrade !=-1)
	{
	grades [enterGrade] +=1;
	cout << "Enter the numeral value for the letter grade. Press -1 when finished;" ;
	cin >> enterGrade;
	
	}
	for (int i=0; i < 5; i++)
	{
		cout << "Grade # " << i;
		cout << " got " << grades [i] << " entries." << endl;
		cout << endl;
	}
	
	return 0;
}
