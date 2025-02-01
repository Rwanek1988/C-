//Rocky Wanek
//April 21, 2023


#include <iostream>
using namespace std;

int main()
{
	int menuChoice = 0;
	double radius;
	double area;
	double width, length, base, height;

	while (menuChoice != 4)
	{
		switch (menuChoice)
		{
		case 0:	
			break;
		case 1: 
			cout << "Enter the radius:";
			cin >> radius;
			area = 3.14 * radius * radius;
			cout << "The area of the circle is " << area << ".\n";
			break;
		case 2: 
			cout << "Enter the width:";
			cin >> width;
			cout << "Enter the length:";
			cin >> length;
			area = width * length;
			cout << "The area of the rectangle is " << area << ".\n";
			break;
		case 3: 
			cout << "Enter the base:";
			cin >> base;
			cout << "Enter the height:";
			cin >> height;
		    area = 0.5*base*height;
			cout << "The area of the triangle is " << area << ".\n";
			break;
		default:  cout << "Invalid menu selection.\n\a";
		}
	// Print Menu	
	cout << endl;
	cout << "Area Calculation Menu\n";
	cout << "1. Circle.\n";
	cout << "2. Rectangle.\n";
	cout << "3. Triangle.\n";
	cout << "4. Exit.\n";
	cout << "Enter your menu choice:";
	cin >> menuChoice;
	}
	cout << "Good bye.\n";
	return 0;
}
