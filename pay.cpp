//Rocky Wanek
//February 03, 2023

#include <cstdlib>
#include <iostream>
#include <iomanip> 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;
void pay();

int main()
{
	pay();
	return 0;
}

void pay() {
	double hours;
	double hourlypay;
	double payout;
	cout << "How many hours did you work this week? ";
	cin >> hours;
	cout << "What is your hourly pay rate? ";
	cin >> hourlypay;
	payout = hours * hourlypay;
	cout << setiosflags(ios::fixed);
	cout << setprecision(2);
	cout << "Your weekly payout is, $" << payout << endl;
	return;
}
