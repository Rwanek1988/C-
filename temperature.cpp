//Rocky Wanek
//January 26, 2023

#include <cstdlib>
#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int fahrenheit;
	int celsius;
	
	cout << "Degrees celsius converted to degrees fahrenheit" << endl;
	cout << endl;
	cout << "Please enter the degrees celsius: ";
	cin >> celsius;
	
	fahrenheit = celsius * 1.8 + 32;
	cout << endl;
	
	cout << "Degrees in fahrenheit are: " <<fahrenheit;
	cout << endl;
	cout << endl;
	
	system ("PAUSE");
	return 0;
}
