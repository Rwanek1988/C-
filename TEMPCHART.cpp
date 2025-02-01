//Rocky Wanek
//February 24, 2023

#include <iostream>

using namespace std;

int main()
{

	int c = 0;
	int sum = 0;
	while (c <= 100)
	{
		cout << c << " Degrees Celcius = " << (c*9)/5 + 32 << "  Degrees Fahrenheit" << endl;
		c = c + 10;
	}
	
	
	system ("PAUSE");
	return 0;
}
