//Rocky Wanek
//March 9, 2023

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


//The purpose of this program is to pick a number at random, while the user tries to guess the number. 
//The program will output if the guess is too high, too low, or correct.

int main()
{
	int num; 
	int guess;
	int tries = 0;
	
	srand(time(0)); 
	num = rand() % 100 + 1; 
	cout << "Try to guess the randomly generated number" << endl;
	cout << endl;

	do
	{
		cout << "Enter a number between 1 and 100 : ";
		cin >> guess;
		tries++;

		if (guess > num)
			cout << "Too high!" << endl;
		else if (guess < num)
			cout << "Too low!" << endl;
		else
			cout << " Correct! It took you " << tries << " guesses!" << endl;
	} while (guess != num);

	return 0;
}
