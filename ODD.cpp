//Rocky Wanek
//February 9, 2023

#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std; 

int main()
{
    int number;
    
    
    
    cout << "Enter a number to evaluate: ";
    cin >> number;
    
    if (number%2==0)
       cout << number << " is even." << endl;
    else
       cout << number << " is odd." << endl;   
    
    system("PAUSE");
    return 0;
}

