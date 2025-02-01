//Rocky Wanek
//March 9, 2023

#include <iostream>
#include <cstdlib>
#include <ctime>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//This program is designed to pick three numbers at random, display them, and sum them up.

using namespace std;

int main() {
	
	cout << "Pick 3 Lottery Helper" << endl;
	cout << endl;
	
	int number1;
	int number2;
	int number3;
	int sum;
	
	srand(time(0));
	number1 = rand() % 10;
	number2 = rand() % 10;
	number3 = rand() % 10;

	cout << "The computer picked numbers: " << number1 << ", " << number2 << ", " << number3 << "." << endl;
	sum = number1 + number2 + number3;
	cout << "The sum of the 3 numbers is: " << sum;
	
	return 0;
}
