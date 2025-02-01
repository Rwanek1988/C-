//Rocky Wanek
//February 28, 2023
//Group members: Nastara Taabodi, Damian Hernandez, Shalini Venkat, and myself.
//Code written by myself. The other members also posted code for this program, but I felt this one flows better for my personal tastes.

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

	int c = 1;
	double maxEgg(0);
	double weight;
	double avg;
	int numEggs;
	double sum = 0.0;
	cout <<	"How many eggs have you found?"  << endl;
	cin >> numEggs;
	while (c <= numEggs)
	
	{
	cout << "Enter the weight in ounces of egg " << c << endl;
	cin >> weight;
		if(weight > maxEgg)
		{
			maxEgg = weight;
		}
		sum = sum + weight;
		c = c + 1;
	}
	
	{
	avg = sum / numEggs;
	
	}

	cout << "The total weight of all the eggs is: " << sum << " oz" << endl;
	cout << "The average weight of all eggs is: " << avg << " oz" << endl;
	cout << "The largest juevo es: " << maxEgg << " oz" << endl;
	system ("PAUSE");
	return 0;
}
