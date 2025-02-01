//Rocky Wanek
//April 01, 2023

#include <iostream>
#include <cmath>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
    int n, i;
    float num[10], sum=0.0, average;

    

    for (i=0; i<10; i++)
    {
        cout << "Enter a number: ";
        cin >> num[i];
        sum += num[i];
        
    }
	
	average = sum / 10;
	
    cout << "The average of all the numbers is:  " << average << endl;
    
    for (i=0; i<10; i++)
    {
        cout << "Number " << i << " is " << num[i] << " and is " << fabs(average - num[i]) << " from the average." << endl;
        
        
    }
	
    
    return 0;
}
