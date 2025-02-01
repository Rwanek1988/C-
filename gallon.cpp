//Rocky Wanek
//January 26, 2023

#include <cstdlib>
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main() {
	int gallons;
	int quarts;
	int pints;
	int ounces;
	
	cout << "WELCOME TO THE UNIT TRANSLATOR 5000" << endl;
	cout << "Gallon(s) converted into quarts, pints, and liquid ounces." << endl;
	cout << "Please enter the number of gallons:";
	cin >> gallons;
	
	quarts = gallons * 4;
	pints = gallons * 8;
	ounces = gallons * 128;
	
	cout << endl;
	cout << "The number of quarts are: " <<quarts;
	cout << endl;
	cout << "The number of pints are: " <<pints; 
	cout << endl;
	cout << "The number of ounces are: " <<ounces; 
	cout << endl;
	cout << endl;
	cout << "THANK YOU FOR USING THE UNIT TRANSLATOR 5000";
	cout << endl;
	cout << endl;
	
	system ("PAUSE");
	return 0;
}
