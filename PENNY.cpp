//Rocky Wanek
//February 24, 2023

#include <cstdlib>
#include <iostream>
#include <iomanip> 

using namespace std;

int main()
{

	int c = 1;
	double startpay = 0.01;
	int days;
	double sum;
	cout << "Enter the number of days worked: ";
	cin >> days;
// Pay was calculated to reflect not only the compounded pay, but also the total pay if he was paid the total of every day.
	while (c <= days)
	{
	
		sum = sum*2 + startpay;
		c = c + 1;
	}
	cout << setiosflags(ios::fixed);
	cout << setprecision(2);
	cout << "Total Pay is : $" << sum << endl; 
	
	system ("PAUSE");
	return 0;
}
