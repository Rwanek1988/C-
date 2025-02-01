// Prof. Touchette
// Text-based ad-lib game
// modified by, Rocky Wanek
//April 29, 2023


#include <iostream>
#include <string>

using namespace std;

//Prototype for functions
string proper_case(string);
string find_ordinal(string);
bool is_a_number(string);

int main()
{
    //Declare variables and initialize
    string lastName = "";
    string firstName = "";
    string firstName_first2char = "";
    string lastName2 = "";
    string firstName2 = "";
    string firstName2_minus2char = "";
    string occupation = "";
    string number = "";
    string ordinal = "";
    string country = "";
    string adjective = "";
    string noun = "";
    string noun2 = "";
    string noun3 = "";
    string noun2init = "";

    // Get inputs
    while (firstName.length() < 2)
    {
        cout << "Enter a person's first name (minimum 2 characters):";
        getline(cin, firstName);
    }
    while (lastName.length() < 2)
    {
        cout << "Enter a person's last name (minimum 2 characters):";
        getline(cin, lastName);
    }
    while (firstName2.length() < 4)
    {
        cout << "Enter a another person's first name (minimum 4 characters):";
        getline(cin, firstName2);
    }
    while (lastName2.length() < 2)
    {
        cout << "Enter a another person's last name (minimum 2 characters):";
        getline(cin, lastName2);
    }
    cout << "Enter an occupation:";
	getline(cin, occupation);
    if (! is_a_number(number))
    {
		cout << "Enter a number:";
		cin >> number;
    }
    //mixing cin and getline can cause a problem
    //clear the buffer before next getline or \n will carry over from cin 
    cin.ignore(); // could also use cin.ignore();
    cout << "Enter the name of a country:";
    getline(cin, country);
    cout << "Enter an adjective(descriptive word):";
    getline(cin, adjective);
    cout << "Enter a noun(a thing):";
    getline(cin, noun);
    cout << "Enter another noun(a thing):";
    getline(cin, noun2);
    cout << "Enter another noun(a thing):";
    getline(cin, noun3);

    //Process text
    firstName = proper_case(firstName);
    lastName = proper_case(lastName);
    firstName2 = proper_case(firstName2);
    lastName2 = proper_case(lastName2);
    country = proper_case(country);
    noun2 = proper_case(noun2);
    noun2init = toupper(noun2[0]);
    ordinal = find_ordinal(number);
    firstName_first2char = firstName.substr(0,2); //*** Need substring (substr) with 1st 2 characters of firstName
    firstName2_minus2char = firstName2.substr(firstName2.length()-3); //*** Need substr for 3rd character to the end of firstName2   

    //Output paragraph
    cout << firstName << " " << lastName << " was a lawyer and " << occupation << " who served as \n";
    cout << country << "'s " << number << ordinal << " president. " << lastName << " led the nation \n";
    cout << "through its greatest " << adjective << " " << noun3 << " crisis and preserved the \n"; 
    cout << noun << ". The president worked with " << firstName2 << " " << lastName2 << " so closedly \n";
    cout << "on the " << noun2 << " Alliance Movement " << "(also know as " << noun2init << "AM), the duo were \n";
    cout << "sometimes referred to as " << firstName_first2char << "-" << firstName2_minus2char << ".\n";

    return 0;
}

string proper_case(string input_name)
{
    string proper_name = input_name;
    proper_name[0] = toupper(input_name[0]);
    for (int i=1; i<input_name.length(); ++i)
    {
        if (isalpha(input_name[i-1]))
        {
            proper_name[i] = tolower(input_name[i]);
        }
        else
        {
			proper_name[i] = toupper(input_name[i]);        }
        
    }
    return proper_name;
}

string find_ordinal(string input_number)
{
    string ord;
    string last_digit;

    last_digit = input_number.substr(input_number.length()-1,1);

    if (last_digit == "1")
    {
        ord = "st";
    } 
    else if (last_digit == "2")
    {
        ord = "nd";
    } 
    else if (last_digit == "3")
    {
        ord = "rd";
    } 
    else if (last_digit == "4")
    {
        ord = "th";
    } 
    else if (last_digit == "5")
    {
        ord = "th";
    } 
    else if (last_digit == "6")
    {
        ord = "th";
    } 
    else if (last_digit == "7")
    {
        ord = "th";
    } 
    else if (last_digit == "8")
    {
        ord = "th";
    } 
    else if (last_digit == "9")
    {
        ord = "th";
    
    }

    //*** Need to finish function for other last digit possibilities here.
    
    // Need special case for 11, 12, and 13 as last 2 digits.
    if (input_number.length() > 1)
    {
        string last_two_digits = input_number.substr(input_number.length()-2,2);
        if (last_two_digits == "11")
            ord = "th";
        if (last_two_digits == "12")
            ord = "th";
        if (last_two_digits == "13")
            ord = "th";
    }


    return ord;
}   

bool is_a_number(string input_number)
{
    if (input_number.length() == 0)
        //*** return true or false;
    for (int i=0;i<input_number.length();++i)
    {
        if (! isdigit(input_number[i]))
        {
            return true;
        }
    }
    return false;
}
