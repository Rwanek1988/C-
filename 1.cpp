//Rocky Wanek
//February 01, 2023
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;
void future_age();

int main()
{
	future_age();
	return 0;
}

void future_age() {
	int currentage;
	int currentyear;
	int futureyear = 2040;
	int futureage;
	cout << "What is your current age? ";
	cin >> currentage;
	cout << "What is the current year? ";
	cin >> currentyear;
	futureage = futureyear - currentyear + currentage;
	cout << "In 2040, you will be " << futureage << " years old" << endl;
	return;
}
