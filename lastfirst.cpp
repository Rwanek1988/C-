//Rocky Wanek
//April 01. 2023

//This program accepts ten numbers as input. When ten numbers have been input the numbers will be output in reverse order. 

#include <iostream>

using namespace std; 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int num [10];
	int i;
	for (i=0; i<10; i++)
	{
		cout << "Enter number:" << endl;
		cin >> num [i];
	}
	for (i=9; i>=0; i--)
	{
		cout << num [i] << endl;
	}
	system ("PAUSE");
	return 0;
}
