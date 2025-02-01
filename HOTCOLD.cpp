//Rocky Wanek| Group Project | Lab 05
//February 13, 2023

//I wrote the code for this and everyone reviewed it for bugs.

//As you read, "at that temperature X will freeze/boil - Think of it as if you were to put X substance into a room at X temperature, it would boil or freeze.
//Not necessarily that X temp is the point of boil/freeze.

#include <iostream>
#include <cstdlib>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std; 

int main() {
	
	double temp;
	cout << "Hey there.." << endl;
	cout << "Have you ever wanted to see a small sample of which substances will freeze or boil at a given temperature?" << endl;
	cout << endl;
	cout << "Please enter a temperature in degrees Fahrenheit:" << endl;
	cin >> temp;
	
	if (temp <= -362)
	{
		cout << "At that temperature: Ethyl alcohol, oxygen, mercury, and water will freeze." << endl;
	}
	if ((temp > -362) && (temp < -306))
	{
		cout << "At that temperature: Ethyl alcohol, mercury, and water will freeze." << endl;
	}
	if ((temp >= -306) && (temp <= -173))
	{
		cout << "At that temperature: Ethyl alcohol, mercury, and water will freeze; Oxygen will boil." << endl;
	}
	if ((temp > -173) && (temp <= -38))
	{
		cout << "At that temperature: Mercury and water will freeze. Oxygen would boil." << endl;
	}
	if ((temp > -38) && (temp <= 32))
	{
		cout << "At that temperature: Water will freeze; Oxygen would boil." << endl;
	}
	if ((temp > 32) && (temp < 172))
	{
		cout << "Oxygen would boil." << endl;
    }
    if ((temp >= 172) && (temp < 212))
    {
    	cout << "At that temperature: Ethyl alcohol and oxygen would boil." << endl;
	}
	if ((temp >= 212) && (temp < 676))
	{
		cout << "At that temperature: Water, ethyl alcohol and oxygen would boil" << endl;	
	}
	if (temp >= 676)
	{
		cout << "At that temperature: Water, ethyl alcohol, oxygen, and mercury would boil." << endl;
	}
	
	
	return 0;
}
