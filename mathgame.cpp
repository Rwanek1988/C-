//Rocky Wanek
//April 21, 2023

#include <iostream>
#include <cstdlib> 
#include <ctime>
#include <algorithm>
using namespace std;

int main()
{
	srand(time(0));
	int menuChoice = 0;
	double  usertotal, total;
	int num1, num2;
	int num3, num4, max1, min1;
	int num5, num6;
	int num7, num8;
	while (menuChoice != 5)
	
	
	{
		switch (menuChoice)
		{
		case 0:	
			break;
		case 1: 
		 	num1 = (rand()%13);
		 	num2 = (rand()%13);
			cout << "Please add " << num1 << " and " << num2 << endl;
			cin >> usertotal;
			total = num1 + num2;	
			if(total == usertotal)
			{
				cout << "You are correct!" << endl;
				
			} else {
				cout << "That is incorrect, the correct answer is " << total << endl;
			}
			
			break;
		case 2: 
			num3 = (rand()%13);
			num4 = (rand()%13);
			max1 = max(num3,num4);
			min1 = min(num3,num4);
			cout << "Please subtract " << max1 << " and " << min1 << endl;
			cin >> usertotal;
			total = max1 - min1;	
			if(total == usertotal)
			{
				cout << "You are correct!" << endl;
				
			} else {
				cout << "That is incorrect, the correct answer is " << total << endl;
			}
			break;
		case 3: 
			num5 = (rand()%13);
			num6 = (rand()%13);
			cout << "Please multiply " << num5 << " and " << num6 << endl;
			cin >> usertotal;
			total = num5 * num6;	
			if(total == usertotal)
			{
				cout << "You are correct!" << endl;
				
			} else {
				cout << "That is incorrect, the correct answer is " << total << endl;
			}
			break;
		case 4: 
			num7 = (rand()%13);
			num8 = 1 + (rand()%12);
			while(num7 / num8, num7%num8)
			{
			num7 = (rand()%13);
			num8 = (rand()%13);
			}
			
			cout << "Please divide " << num7 << " and " << num8 << endl;
			cin >> usertotal;
			total = num7 / num8;	
		
			if(total == usertotal)
			{
				cout << "You are correct!" << endl;
				
			} else {
				cout << "That is incorrect, the correct answer is " << total << endl;
			}
			break;		
		default:  cout << "Invalid menu selection.\n\a";
		}
	// Print Menu	
	cout << endl;
	cout << "Please select following math calulation:\n";
	cout << "1. Addition.\n";
	cout << "2. Subtraction.\n";
	cout << "3. Multiplication.\n";
	cout << "4. Division.\n";
	cout << "5. Exit.\n";
	cout << "Enter your menu choice:";
	cin >> menuChoice;
	}
	cout << "Good bye.\n";
	return 0;
}
