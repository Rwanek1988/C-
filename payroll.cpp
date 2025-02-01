//Rocky Wanek
//April 14, 2023

#include<iostream>

#include<stdio.h>

#include<fstream>

#include<sstream>

#include<string.h>

#include<cstdlib>

//namespace

using namespace std;

//start of main function

int main()

{

//variables

ifstream infile;

string line;

string data[10];

string name[10];

int a = 0, b = 0, c = 0;

double hourly_wage[5];

int hours[10];

int i = 0, j = 0, k;

//open file for reading

infile.open("emp_data.txt");

//if file does not exist

if(!infile)

{

cout<<"Error in opening the file."<<endl;

}

//read file data

while(getline(infile, line))

{

//read line

stringstream ss(line);

string value;

//seperate the line with ,

while(getline(ss, value, ','))

{

data[i] = value;

i++;

//if i is 3

if(i == 3)

{

//store the data to name , hourly_wage and hours

name[a] = data[0];

hourly_wage[b] = stof(data[1]);

hours[c] = stoi(data[2]);

a++;

b++;

c++;

i = 0;

}

}

}

//declare the array

double paycheck[5];

double total_pay = 0;

//calculate the paycheck and the total pay

for(k = 0;k <a; k++)

{
cout<<"Name: "<<name[k]<<endl;

paycheck[k] = hourly_wage[k]*hours[k];

cout<<"Paycheck: $"<<paycheck[k]<<endl;

cout<<endl;

total_pay = total_pay + paycheck[k];

}

//display the total pay

cout<<"Total pay of all employees = $"<<total_pay<<endl;

infile.close();

return 0;

}

//end of the main function
