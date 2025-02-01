//Rocky Wanek
//Code from Shalini Venkat, edited by myself.
//Group members: Nastara Taabodi, Damian Hernandez, Shalini Venkat, and myself.
//ITSE 1329, February 28, 2023
//Create a program that sums all the odd numbers from 1 to 99

#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
    int number = 1;
    int sum;
    
    cout << "Hello! Want to know the sum of all odd numbers from 1 to 99?" << endl;
    
    while (number <= 99)
    {
        number = number + 1;
        if (number % 2 != 0)
        {
            sum = number + sum;
        }
    }
    cout << "The sum of all odd numbers from 1 to 99 is " << sum << endl;
    return 0;
}
