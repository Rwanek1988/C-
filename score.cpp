//Rocky Wanek
//February 03, 2023

#include <cstdlib>
#include <iostream>
#include <iomanip> 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;
void score();

int main()
{
	score();
	return 0;
}

void score() {
	char name[20];
	double numberofquestions;
	double correctquestions;
	double score;
	cout << "What is your name? ";
	cin >> name;
	cout << "How many questions are on the exam? ";
	cin >> numberofquestions;
	cout << "How many questions are right? ";
	cin >> correctquestions;
	score = correctquestions / numberofquestions * 100;
	cout << setiosflags(ios::fixed);
	cout << setprecision(2);
	cout << name << "'s grade for the exam was " << score << "%" << endl;
	return;
}
