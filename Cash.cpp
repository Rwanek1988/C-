//Rocky Wanek
//March 01, 2023
//Group members: Shalini Venkat, Nastaran Taabodi, Damian Hernandez, and myself.
//Code written by myself. The other members also posted code for this program, but I felt this one flows better for my personal tastes.


#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <iomanip> 
using namespace std;

int main()
{
	int c = 1;
	double price;
	int numItems;
	double sum = 0.0;
	cout << "Thank you for shopping at, The Store!" << endl;
	cout <<	"How many Items do you have?"  << endl;
	cin >> numItems;
	while (c <= numItems)
	
	{
	cout << "Enter the purchase price of item " << c << ": $";
	cin >> price;
	
		sum = sum + price;
		c = c + 1;
	}
	cout << setiosflags(ios::fixed);
	cout << setprecision(2);
	cout << endl;
	cout << "The total cost of all your items is: $" << sum <<endl;
	cout << endl;
	cout << "The total cost of your items + 8% tax is: $" << sum*1.08 <<endl;

	system ("PAUSE");
	return 0;
}

