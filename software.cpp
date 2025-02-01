// Rocky Wanek
// March 23, 2023

// Software Sales Program
// Add code to make sure only positive numbers are used for number of units sold input
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
// Constant for the unit price.
const double UNIT_PRICE = 99.0;

int unitsSold; // Number of units sold
double discountPct; // Discount percentage
double discountCost; // Unit cost after discount
double totalCost; // Total cost
double moneySaved; // Money saved

// Input for the number of units sold.
cout << "Enter the number of units sold: ";
cin >> unitsSold;

// INPUT VALIDATION INCOMING!!!
// Make sure a positive number was entered.

while(unitsSold < 0)
	{
	
	cout << "ERROR: Units sold cannot be less than 0." << endl;
	cout << "Enter the number of units sold: ";
	cin >> unitsSold;
}

// Determine the discount percentage.
if (unitsSold < 10)
discountPct = 0.00;
else if (unitsSold >= 10 && unitsSold <= 19)
discountPct = 0.20;
else if (unitsSold >= 20 && unitsSold <= 49)
discountPct = 0.30;
else if (unitsSold >= 50 && unitsSold <= 99)
discountPct = 0.40;
else if (unitsSold >= 100 && unitsSold <= 149)
discountPct = 0.45;
else if (unitsSold >= 150)
discountPct = 0.50;

// Incorrect formula was provided to calculate the cost after discount. 
// It should be unitPrice - UNIT_PRICE * discountpct
// Calculate the unit cost after the discount.
discountCost = UNIT_PRICE - UNIT_PRICE * discountPct;

// Calculate total cost.
totalCost = unitsSold * discountCost;

// Calculate money saved.
moneySaved = UNIT_PRICE * unitsSold - totalCost;


// Display the total cost.
cout << fixed << showpoint << setprecision(2);
cout << "The total cost of the purchase is $" << totalCost << endl;
cout << "You saved $" << moneySaved << " dollars today." << endl;

return 0;
}
