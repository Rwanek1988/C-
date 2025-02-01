//Rocky Wanek
//January 26, 2023


#include <cstdlib>
#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	

	int hours;
	int days;
	
	cout << "Convert days to hours" << endl;
	cout << "Enter the number of days:";
	cin >> days;
	
	hours = days * 24;
	
	cout << "The number of hours is " << hours;
	cout << endl;
	system ("PAUSE");
	return 0;
}
