//Rocky Wanek
//February 9, 2023

#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std; 

int main() {
	 
	double x;
	double y; 
	
	cout << "Enter a number to evaluate: ";
	cin >> x;
	
	cout << "Enter a second number to evaluate: ";
	cin >> y;
	
	if (x > y) 
	cout << x << " is greater than " << y;
	else if (x < y)
	cout << y << " is greater than "	<< x;
	else
	cout << y << " is equal to " << x;

	return 0;
}
