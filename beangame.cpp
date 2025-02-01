//Rocky Wanek
//March 9, 2023

#include <cmath>
#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//This program is designed to estimate the number of Jelly Beans in jars that vary by deminsions.

int main() {
	
	double height;
	double radius;
	double diameter;
	double volumeOfCylinder;
	double jellyBeanVolume;
	
	cout << "JELLYBEAN ESTIMATOR" << endl;
	cout << endl;
	cout << "Please enter the approximate diameter of the inside of the jar in centimeters: " << endl;
	cin >> diameter;
	radius = (diameter / 2);
	cout << "Please enter the height of the jar in centimeters: " <<endl;
	cin >> height;
	
	//3.53cm cubed is the volume of a single jellybean, given the measurements provided in lab instructions.
	
	volumeOfCylinder = 3.14159 * height * pow(radius, 2);
	jellyBeanVolume = volumeOfCylinder / 3.53;
	
	cout << endl;
	cout << "There are approximately " << jellyBeanVolume << " Jelly Beans in the jar." << endl;
	
	
	
	
	return 0;
}
