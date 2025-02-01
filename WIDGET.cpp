//Rocky Wanek | Group Project | Lab 05
// February 14, 2023

//The majority of this code was written by Jeffrey Mckeel. I cleaned it up for my personal preferences and reworded it. 

#include <iostream>
#include <iomanip>

using namespace std;

// Function/Module with an argument
void CalculateTotalWidgetAmount(int widgetAmount)
{
    // Declaring the variable
    float totalWidgetAmount;
    
    // Entering the "if" statement once the function gets called
    if (widgetAmount < 2)
    {
        // single unit
        totalWidgetAmount = widgetAmount * 10; 
    }
    // Implementing the "&&" to focus on the range between 2 and 4. If I used "||", it will execute only 2 or 4. 
    else if (widgetAmount >= 2 && widgetAmount <= 4) 
    {
        // 2 to 4 units
        totalWidgetAmount = widgetAmount * 9; 
    }
    else if (widgetAmount >= 5 && widgetAmount <= 9)
    {
        // 5 to 9 units
        totalWidgetAmount = widgetAmount * 8; 
    }
    else if (widgetAmount >= 10)
    {
        // 10 and over units
        totalWidgetAmount = widgetAmount * 6; 
    }
    
    // Outputs
    cout << setiosflags (ios::fixed);
    cout << setprecision(2);
    cout << "Your total is: $" << totalWidgetAmount << " for " << widgetAmount << " widget(s)." << endl;
}

int main()
{
    // Declaring the variable
    int widgetAmount;
    
    // Asking the user to enter the inputs
    cout << "Hi! I have some widgets for sale.." << endl;
    cout << endl;
    cout << "The price of widgets varies based on the amount you buy!" << endl;
    cout << endl;
    cout << "A single unit is 10 dollars;" << endl;
    cout << "For 2 to 4 units, the cost per unit is 9 dollars;" << endl;
    cout << "For 5 to 9 units, the cost per unit is 8 dollars;" << endl;
    cout << "For 10 and over the cost is 6 dollars per unit." << endl;
    cout << endl;
    cout << "How many widgets do you want to buy?" << endl;
    cin >> widgetAmount;
    
    // Calculation...
    CalculateTotalWidgetAmount(widgetAmount); // Call the function/module
    
    return 0;
}
