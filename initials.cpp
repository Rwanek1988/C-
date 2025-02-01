//Rocky Wanek
//April 29, 2023

#include <iostream>

using namespace std;

int main()
{
	char firstname[20];
	char lastname[20];
	char firstinitial, lastinitial;
	cout << "Enter a name: ";
	cin >> firstname >> lastname;
	
	firstinitial = toupper(firstname[0]);
	lastinitial = toupper(lastname[0]);
	cout << "The intials are " << firstinitial << lastinitial;
	return 0;
}
