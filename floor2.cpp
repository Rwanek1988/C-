//Rocky Wanek
//February 9, 2023


#include <iostream>
#include <cstdlib>
#include <iomanip> 
#include <cmath>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;


int main() {
	
	int choice =0;
	double length, width, diameter, area, area2, cost, cost2, flooringcost;
	
	cout << "To find the total area, and material cost of your room, we first need to know the shape of your room." << endl;
	cout << endl;
	cout << "Enter 1 for rectangular, or 2 for circular." << endl;
	cin >> choice;
	cout << "Enter the material cost per squarefoot: " << endl;
	cin >> flooringcost;
	
	if (choice == 1) 
	{
		cout << "Enter the length: ";
		cin >> length;
		cout << "Enter the width: ";
		cin >> width;
		area = length * width;
		cost = area * flooringcost;
		cout << setiosflags(ios::fixed);
		cout << setprecision(2);
		cout << "The area of the room is " << area;
		cout << " sqft, and the total cost of flooring is $" << cost;
	}
	
	if (choice == 2)
	{
		cout << "Enter the diameter: ";
		cin >> diameter;
		area2 = (diameter / 2) * (diameter /2) * M_PI;
		cout << setiosflags(ios::fixed);
		cout << setprecision(2);
		cost2 = area2 * flooringcost;
		cout << "The area of the room is " << area2;
		cout << " sqft, and the total cost of flooring is $" << cost2;
		
	}
	return 0;
}
