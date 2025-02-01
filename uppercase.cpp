//Rocky Wanek
//April 29, 2023


#include <iostream>
using namespace std;

int main()
{
	char name[20];
	
	cout << "Enter a name: ";
	fgets(name, 20, stdin);
	for(int i=0; name[i] != '\0'; i++)
	{
		name[i] = toupper(name[i]);
	}
	cout << "The name in upper case is " << name;
	
	return 0;
}
