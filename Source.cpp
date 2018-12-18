Assignment: p. 242 #22
Due Date: 10-01-18
Description: An international internet phone company has three different subcription plans. Write a program 
that calculates a customers monthly bill. It should input customer name, which package the customer has purchased
and how many hours were used. It should then create a bill that includes INPUT information and the total amount due.
Wherever possible use named constants instead of numbers. ALSO input validation on packages A, B, and C.
*/
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
#include "Function.h"

int main()
{
	string Name;
	int input;
	double MinutesUsed = 0;
	double MonthlyBill = 0;
	double Savings = 0;
	double ComparisonA=0;
	double ComparisonB=0;

	cout << "Hello customer, please enter your First and Last name: \n";
	getline(cin, Name);
	
	cout << "Which plan would you like to sucscribe to? \n";
	cout << " Plan A: For $9.95 per month 5 hours of call time are provided. Additional usage costs are $0.08 per minute\n";
	cout << " Plan B: For $14.95 per month 5 hours of call time are provided. Additional usage costs are $0.06 per minute\n";
	cout << " Plan C: For $19.95 per month unlimited call time is provided. \n";
	cout << "1. Plan A \n" << "2. Plan B \n" << "3. Plan C \n";
	cin >> input;
	cin.ignore(1);
	cout << " How many Minutes have you used?\n";
	cin >> MinutesUsed;
	cout << fixed << setprecision(2);
	if (MinutesUsed >= 0)
	{
		//Input Validation
		if (input >= 1 && input < 4)
			MonthlyBill = CalcFee(input, MinutesUsed); //Bill plans
		else
			cout << " Error! invalid Value!";
	}
	else
		cout << "Error! No valid value for MINUTES!\n";
	// Bill Display
	cout << "Hello " << Name << endl;
	cout << "Your monthly bill is: $" << MonthlyBill << endl;
	cout << "Hours used are : " << MinutesUsed / 60 <<endl;
	//SAVINGS COMPARISON IF APPLICABLE
	if (input == 1)
	{
		ComparisonA = CalcFee(2, MinutesUsed);
		ComparisonB = CalcFee(3, MinutesUsed);
		if (MonthlyBill < ComparisonA)
		{
			cout << " Compared to plan B, you saved: $" << ComparisonA - MonthlyBill << endl;
			cout << " Compared to plan C, you saved: $" << ComparisonB - MonthlyBill << endl;
		}
		else
			cout << "\n";
	}
	else if (input ==2)
	{	ComparisonA = CalcFee(3, MinutesUsed);
		if (MonthlyBill < ComparisonA)
			cout << " Compared to plan C, you saved: $" << ComparisonA - MonthlyBill << endl;
		else
			cout << "\n";
	}
	else


	return 0;
}
