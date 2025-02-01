//Rocky Wanek | Group Project | Lab 05
// February 14, 2023

//This code was written by me. I submitted it into group chat and others tried slight variations of wording or code. I found this to work best. 
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <iomanip> 
#include <string>

using namespace std;
int main(){


double grade1, grade2, grade3, min1, min2, totalmin, average;
char firstname[20], lastname[20];

//I was wanting for a single entry of first and last name and not wanting two individual instances. 
//Eric Aguilar inputed code that allowed that, but I decided to stick with the name entry this way. 

cout << "Please enter your first name:" << endl;
cin >> firstname;
cout << "Please enter your last name:" << endl;
cin >> lastname;
cout << "This program will accept three grades and output your average grade after dropping your lowest score." << endl;
cout << endl;


cout << "Please enter your first grade (0-100):" << endl;
cin >> grade1;
while (grade1 > 100 or grade1 < 0)
{
	cout << "Please only enter a grade between 0 and 100." << endl; 
	cout << "Please enter your first grade (0-100):";
	cin >> grade1;
}

cout << "Please enter your second grade (0-100):" << endl;
cin >> grade2;
while (grade2 > 100 or grade2 < 0)
{
	cout << "Please only enter a grade between 0 and 100." << endl; 
	cout << "Please enter your second grade (0-100):";
	cin >> grade2;
}
cout << "Please enter your third grade (0-100):" << endl;
cin >> grade3;
while (grade3 > 100 or grade3 < 0)
{
	cout << "Please only enter a grade between 0 and 100." << endl; 
	cout << "Please enter your third grade (0-100):";
	cin >> grade3;
}

min1 = min(grade1,grade2);
min2 = min(grade2,grade3);
totalmin = min(min1,min2);
cout << setiosflags(ios::fixed);
cout << setprecision(2);
average = (grade1+grade2+grade3-totalmin)/2;

cout << firstname << " " << lastname << ", your grade average with dropping your lowest grade is: " << average << "%";




    return 0;
}
